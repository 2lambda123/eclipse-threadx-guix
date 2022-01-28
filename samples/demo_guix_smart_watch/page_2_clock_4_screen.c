#include "demo_guix_smart_watch.h"

#define CLOCK_SLIDE_SHIFT 30

/* Extern system time.  */
extern TIME system_time;

/* Define clock slide animation control blocks. */
static GX_ANIMATION clock_slide_animation[2];

/******************************************************************************************/
/* Update clock time.                                                                     */
/******************************************************************************************/
static VOID screen_clock_update()
{
    gx_numeric_prompt_value_set(&clock_4_screen.clock_4_screen_hour, system_time.hour);
    gx_numeric_prompt_value_set(&clock_4_screen.clock_4_screen_minute, system_time.minute);
}

/******************************************************************************************/
/* Start clock slide animation.                                                           */
/******************************************************************************************/
static void clock_slide_animation_start()
{
    GX_ANIMATION_INFO info;
    GX_WIDGET *target_hour = (GX_WIDGET*)&clock_4_screen.clock_4_screen_hour;
    GX_WIDGET *target_minute = (GX_WIDGET*)&clock_4_screen.clock_4_screen_minute;
    INT sign;

    if (target_hour->gx_widget_size.gx_rectangle_left < target_minute->gx_widget_size.gx_rectangle_left)
    {
        sign = 1;
    }
    else
    {
        sign = -1;
    }

    memset(&info, 0, sizeof(GX_ANIMATION_INFO));
    info.gx_animation_parent = (GX_WIDGET *)&clock_4_screen;
    info.gx_animation_target = target_hour;
    info.gx_animation_start_alpha = 255;
    info.gx_animation_end_alpha = 255;
    info.gx_animation_frame_interval = 40 / GX_SYSTEM_TIMER_MS;
    info.gx_animation_steps = 30;
    info.gx_animation_id = CLOCK_SLIDE_ANIMATION_ID;
    info.gx_animation_start_position.gx_point_x = target_hour->gx_widget_size.gx_rectangle_left;
    info.gx_animation_start_position.gx_point_y = target_hour->gx_widget_size.gx_rectangle_top;
    info.gx_animation_end_position.gx_point_x = info.gx_animation_start_position.gx_point_x + CLOCK_SLIDE_SHIFT * sign;
    info.gx_animation_end_position.gx_point_y = info.gx_animation_start_position.gx_point_y;

    gx_animation_start(&clock_slide_animation[0], &info);

    info.gx_animation_target = target_minute;
    info.gx_animation_start_position.gx_point_x = target_minute->gx_widget_size.gx_rectangle_left;
    info.gx_animation_start_position.gx_point_y = target_minute->gx_widget_size.gx_rectangle_top;
    info.gx_animation_end_position.gx_point_x = info.gx_animation_start_position.gx_point_x - CLOCK_SLIDE_SHIFT * sign;
    info.gx_animation_end_position.gx_point_y = info.gx_animation_start_position.gx_point_y;

    gx_animation_start(&clock_slide_animation[1], &info);
}

/******************************************************************************************/
/* Stop clock slide animation.                                                            */
/******************************************************************************************/
static void clock_slide_animation_stop()
{
    gx_animation_stop(&clock_slide_animation[0]);
    gx_animation_stop(&clock_slide_animation[1]);
}

/******************************************************************************************/
/* Override the default event processing of "clock_screen_template" to handle signals     */
/* from my child widgets.                                                                 */
/******************************************************************************************/
UINT clock_4_screen_event_process(GX_WINDOW* window, GX_EVENT* event_ptr)
{
    switch (event_ptr->gx_event_type)
    {
    case GX_EVENT_SHOW:
        gx_animation_create(&clock_slide_animation[0]);
        gx_animation_create(&clock_slide_animation[1]);
        screen_clock_update();
        gx_system_timer_start(window, SCREEN_CLOCK_TIMER_ID, GX_TICKS_SECOND, GX_TICKS_SECOND);
        return gx_window_event_process(window, event_ptr);

    case GX_EVENT_HIDE:
        gx_system_timer_stop(window, SCREEN_CLOCK_TIMER_ID);
        gx_system_timer_stop(window, SCREEN_ANIMATION_TIMER_ID);
        return gx_window_event_process(window, event_ptr);

    case USER_EVENT_ANIMATION_START:
        clock_slide_animation_start();
        break;

    case USER_EVENT_ANIMATION_STOP:
        clock_slide_animation_stop();
        break;

    case GX_EVENT_ANIMATION_COMPLETE:
        if (event_ptr->gx_event_sender == CLOCK_SLIDE_ANIMATION_ID)
        {
            clock_slide_animation_start();
        }
        break;

    case GX_EVENT_TIMER:
        if (event_ptr->gx_event_payload.gx_event_timer_id == SCREEN_CLOCK_TIMER_ID)
        {
            screen_clock_update();
        }
        break;

    default:
        return gx_window_event_process(window, event_ptr);
    }

    return 0;
}