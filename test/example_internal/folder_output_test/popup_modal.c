/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.2.1.2                                               */
/*  Date (dd.mm.yyyy):  5. 6.2023   Time (hh:mm): 15:09                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "folder_output_test_MAIN_DISPLAY_resources.h"
#include "folder_output_test_SECONDARY_resources.h"
#include "folder_output_test_specifications.h"

extern GX_WINDOW_ROOT MAIN_DISPLAY_root_window;
extern GX_WINDOW_ROOT SECONDARY_root_window;
MAIN_DISPLAY_POPUP_MODAL_DERIVED_1_CONTROL_BLOCK MAIN_DISPLAY_popup_modal_derived_1;
GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_derived_define;
SECONDARY_POPUP_MODAL_DERIVED_1_CONTROL_BLOCK SECONDARY_popup_modal_derived_1;
extern GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_define;
extern GX_CONST GX_STUDIO_WIDGET SECONDARY_popup_modal_define;
extern GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_derived_1_define;
extern MAIN_DISPLAY_POPUP_MODAL_DERIVED_DERIVED_1_CONTROL_BLOCK MAIN_DISPLAY_popup_modal_derived_derived_1;
GX_TEMPLATE_PROPERTIES MAIN_DISPLAY_popup_modal_derived_1_properties =
{
    &MAIN_DISPLAY_popup_modal_define,        /* base info                      */
    gx_studio_window_create,                 /* base create function           */
    {160, 120, 479, 359}                     /* widget size                    */
};
GX_TEXT_BUTTON_PROPERTIES MAIN_DISPLAY_popup_modal_derived_1_next_button_10_properties =
{
    GX_STRING_ID_MAIN_DISPLAY_STRING_36,     /* string id                      */
    GX_FONT_ID_BUTTON,                       /* font id                        */
    GX_COLOR_ID_MAIN_DISPLAY_WHITE,          /* normal text color              */
    GX_COLOR_ID_MAIN_DISPLAY_WHITE,          /* selected text color            */
    GX_COLOR_ID_MAIN_DISPLAY_WHITE           /* disabled text color            */
};
GX_ML_TEXT_VIEW_PROPERTIES MAIN_DISPLAY_popup_modal_derived_1_text_view_4_properties =
{
    GX_STRING_ID_MAIN_DISPLAY_STRING_102,    /* string id                      */
    GX_FONT_ID_TEXT_INPUT,                   /* font id                        */
    GX_COLOR_ID_TEXT_INPUT_TEXT,             /* normal text color              */
    GX_COLOR_ID_TEXT_INPUT_TEXT,             /* selected text color            */
    GX_COLOR_ID_TEXT,                        /* disabled text color            */
    0,                                       /* whitespace                     */
    0                                        /* line_space                     */
};

GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_1_text_view_4_define =
{
    "text_view_4",
    GX_TYPE_MULTI_LINE_TEXT_VIEW,            /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT|GX_STYLE_TEXT_CENTER,   /* style flags */
    0,                                       /* status flags                   */
    sizeof(GX_MULTI_LINE_TEXT_VIEW),         /* control block size             */
    GX_COLOR_ID_TEXT_INPUT_FILL,             /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_multi_line_text_view_create,     /* create function              */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {194, 206, 409, 247},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_POPUP_MODAL_DERIVED_1_CONTROL_BLOCK, MAIN_DISPLAY_popup_modal_derived_1_text_view_4), /* control block */
    (void *) &MAIN_DISPLAY_popup_modal_derived_1_text_view_4_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_1_next_button_10_define =
{
    "next_button_10",
    GX_TYPE_TEXT_BUTTON,                     /* widget type                    */
    IDB_NEXT,                                /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_TEXT_BUTTON),                  /* control block size             */
    GX_COLOR_ID_MAIN_DISPLAY_NEXT_BUTTON_LOWER,     /* normal color id         */
    GX_COLOR_ID_MAIN_DISPLAY_NEXT_BUTTON_UPPER,     /* selected color id       */
    GX_COLOR_ID_MAIN_DISPLAY_NEXT_BUTTON_LOWER,     /* disabled color id       */
    gx_studio_text_button_create,            /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {362, 314, 441, 338},                    /* widget size                    */
    &MAIN_DISPLAY_popup_modal_derived_1_text_view_4_define, /* next widget definition */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_POPUP_MODAL_DERIVED_1_CONTROL_BLOCK, MAIN_DISPLAY_popup_modal_derived_1_next_button_10), /* control block */
    (void *) &MAIN_DISPLAY_popup_modal_derived_1_next_button_10_properties /* extended properties */
};

GX_STUDIO_ACTION MAIN_DISPLAY_popup_modal_derived_1__idb_next_gx_event_clicked_actions[2] = {
    {GX_ACTION_TYPE_TOGGLE, 0, &MAIN_DISPLAY_root_window, &MAIN_DISPLAY_popup_modal_derived_derived_1, GX_NULL},
    {0, 0, GX_NULL, GX_NULL, GX_NULL}
};

static GX_STUDIO_EVENT_ENTRY gx_studio_MAIN_DISPLAY_popup_modal_derived_1_event_table[] = {
    {GX_SIGNAL(IDB_NEXT, GX_EVENT_CLICKED), 0, MAIN_DISPLAY_popup_modal_derived_1__idb_next_gx_event_clicked_actions},
    {0, 0, GX_NULL}
};

GX_STUDIO_EVENT_PROCESS MAIN_DISPLAY_popup_modal_derived_1_event_chain = {gx_studio_MAIN_DISPLAY_popup_modal_derived_1_event_table, (UINT (*)(GX_WIDGET *, GX_EVENT *))gx_window_event_process};
static UINT gx_studio_MAIN_DISPLAY_popup_modal_derived_1_event_process(GX_WIDGET *target, GX_EVENT *event_ptr)
{
    return (gx_studio_auto_event_handler(target, event_ptr, &MAIN_DISPLAY_popup_modal_derived_1_event_chain));
}


GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_1_define =
{
    "MAIN_DISPLAY_popup_modal_derived_1",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_POPUP_MODAL_DERIVED_1_CONTROL_BLOCK), /* control block size */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) gx_studio_MAIN_DISPLAY_popup_modal_derived_1_event_process, /* event function override */
    {160, 120, 479, 359},                    /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &MAIN_DISPLAY_popup_modal_derived_1_next_button_10_define, /* child widget */
    0,                                       /* control block                  */
    (void *) &MAIN_DISPLAY_popup_modal_derived_1_properties /* extended properties */
};
GX_TEMPLATE_PROPERTIES MAIN_DISPLAY_popup_modal_derived_properties =
{
    &MAIN_DISPLAY_popup_modal_define,        /* base info                      */
    gx_studio_window_create,                 /* base create function           */
    {156, 120, 475, 359}                     /* widget size                    */
};
GX_ML_TEXT_VIEW_PROPERTIES MAIN_DISPLAY_popup_modal_derived_text_view_4_properties =
{
    GX_STRING_ID_MAIN_DISPLAY_STRING_103,    /* string id                      */
    GX_FONT_ID_TEXT_INPUT,                   /* font id                        */
    GX_COLOR_ID_TEXT_INPUT_TEXT,             /* normal text color              */
    GX_COLOR_ID_TEXT_INPUT_TEXT,             /* selected text color            */
    GX_COLOR_ID_TEXT,                        /* disabled text color            */
    0,                                       /* whitespace                     */
    0                                        /* line_space                     */
};

GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_text_view_4_define =
{
    "text_view_4",
    GX_TYPE_MULTI_LINE_TEXT_VIEW,            /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT|GX_STYLE_TEXT_CENTER,   /* style flags */
    0,                                       /* status flags                   */
    sizeof(GX_MULTI_LINE_TEXT_VIEW),         /* control block size             */
    GX_COLOR_ID_TEXT_INPUT_FILL,             /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_multi_line_text_view_create,     /* create function              */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {196, 199, 411, 240},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_DISPLAY_POPUP_MODAL_DERIVED_CONTROL_BLOCK, MAIN_DISPLAY_popup_modal_derived_text_view_4), /* control block */
    (void *) &MAIN_DISPLAY_popup_modal_derived_text_view_4_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_define =
{
    "MAIN_DISPLAY_popup_modal_derived",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_POPUP_MODAL_DERIVED_CONTROL_BLOCK), /* control block size */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {156, 120, 475, 359},                    /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &MAIN_DISPLAY_popup_modal_derived_text_view_4_define, /* child widget      */
    0,                                       /* control block                  */
    (void *) &MAIN_DISPLAY_popup_modal_derived_properties /* extended properties */
};
GX_TEMPLATE_PROPERTIES MAIN_DISPLAY_popup_modal_derived_derived_properties =
{
    &MAIN_DISPLAY_popup_modal_derived_define,  /* base info                    */
    gx_studio_template_create,               /* base create function           */
    {160, 120, 479, 359}                     /* widget size                    */
};
GX_ML_TEXT_VIEW_PROPERTIES MAIN_DISPLAY_popup_modal_derived_derived_text_view_6_properties =
{
    GX_STRING_ID_MAIN_DISPLAY_STRING_102,    /* string id                      */
    GX_FONT_ID_TEXT_INPUT,                   /* font id                        */
    GX_COLOR_ID_TEXT_INPUT_TEXT,             /* normal text color              */
    GX_COLOR_ID_TEXT_INPUT_TEXT,             /* selected text color            */
    GX_COLOR_ID_DISABLED_TEXT,               /* disabled text color            */
    0,                                       /* whitespace                     */
    0                                        /* line_space                     */
};

GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_derived_text_view_6_define =
{
    "text_view_6",
    GX_TYPE_MULTI_LINE_TEXT_VIEW,            /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT|GX_STYLE_DYNAMICALLY_ALLOCATED|GX_STYLE_TEXT_CENTER,   /* style flags */
    0,                                       /* status flags                   */
    sizeof(GX_MULTI_LINE_TEXT_VIEW),         /* control block size             */
    GX_COLOR_ID_TEXT_INPUT_FILL,             /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_multi_line_text_view_create,     /* create function              */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {178, 241, 426, 282},                    /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    0,                                       /* runtime control block          */
    (void *) &MAIN_DISPLAY_popup_modal_derived_derived_text_view_6_properties /* extended properties */
};

GX_STUDIO_ACTION MAIN_DISPLAY_popup_modal_derived_derived__idb_ok_gx_event_clicked_actions[2] = {
    {GX_ACTION_TYPE_WINDOW_EXECUTE_STOP, GX_ACTION_FLAG_DYNAMIC_TARGET, &MAIN_DISPLAY_root_window,  &MAIN_DISPLAY_popup_modal_derived_derived_define, GX_NULL},
    {0, 0, GX_NULL, GX_NULL, GX_NULL}
};


GX_STUDIO_ACTION MAIN_DISPLAY_popup_modal_derived_derived__idb_cancel_gx_event_clicked_actions[2] = {
    {GX_ACTION_TYPE_WINDOW_EXECUTE_STOP, GX_ACTION_FLAG_DYNAMIC_TARGET, &MAIN_DISPLAY_root_window,  &MAIN_DISPLAY_popup_modal_derived_derived_define, GX_NULL},
    {0, 0, GX_NULL, GX_NULL, GX_NULL}
};

static GX_STUDIO_EVENT_ENTRY gx_studio_MAIN_DISPLAY_popup_modal_derived_derived_event_table[] = {
    {GX_SIGNAL(IDB_OK, GX_EVENT_CLICKED), 0, MAIN_DISPLAY_popup_modal_derived_derived__idb_ok_gx_event_clicked_actions},
    {GX_SIGNAL(IDB_CANCEL, GX_EVENT_CLICKED), 0, MAIN_DISPLAY_popup_modal_derived_derived__idb_cancel_gx_event_clicked_actions},
    {0, 0, GX_NULL}
};

GX_STUDIO_EVENT_PROCESS MAIN_DISPLAY_popup_modal_derived_derived_event_chain = {gx_studio_MAIN_DISPLAY_popup_modal_derived_derived_event_table, (UINT (*)(GX_WIDGET *, GX_EVENT *))gx_window_event_process};
static UINT gx_studio_MAIN_DISPLAY_popup_modal_derived_derived_event_process(GX_WIDGET *target, GX_EVENT *event_ptr)
{
    return (gx_studio_auto_event_handler(target, event_ptr, &MAIN_DISPLAY_popup_modal_derived_derived_event_chain));
}


GX_CONST GX_STUDIO_WIDGET MAIN_DISPLAY_popup_modal_derived_derived_define =
{
    "MAIN_DISPLAY_popup_modal_derived_derived",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    ID_POPUP_MODAL,                          /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_DYNAMICALLY_ALLOCATED,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_DISPLAY_POPUP_MODAL_DERIVED_DERIVED_CONTROL_BLOCK), /* control block size */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) gx_studio_MAIN_DISPLAY_popup_modal_derived_derived_event_process, /* event function override */
    {160, 120, 479, 359},                    /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &MAIN_DISPLAY_popup_modal_derived_derived_text_view_6_define, /* child widget */
    0,                                       /* control block                  */
    (void *) &MAIN_DISPLAY_popup_modal_derived_derived_properties /* extended properties */
};
GX_TEMPLATE_PROPERTIES SECONDARY_popup_modal_derived_1_properties =
{
    &SECONDARY_popup_modal_define,           /* base info                      */
    gx_studio_window_create,                 /* base create function           */
    {160, 120, 479, 359}                     /* widget size                    */
};

GX_CONST GX_STUDIO_WIDGET SECONDARY_popup_modal_derived_1_define =
{
    "SECONDARY_popup_modal_derived_1",
    GX_TYPE_TEMPLATE,                        /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED,   /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(SECONDARY_POPUP_MODAL_DERIVED_1_CONTROL_BLOCK), /* control block size */
    GX_COLOR_ID_WINDOW_FILL,                 /* normal color id                */
    GX_COLOR_ID_WINDOW_FILL,                 /* selected color id              */
    GX_COLOR_ID_DISABLED_FILL,               /* disabled color id              */
    gx_studio_template_create,               /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {160, 120, 479, 359},                    /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    GX_NULL,                                 /* child widget                   */
    0,                                       /* control block                  */
    (void *) &SECONDARY_popup_modal_derived_1_properties /* extended properties */
};
#undef GUIX_STUDIO_GENERATED_FILE
