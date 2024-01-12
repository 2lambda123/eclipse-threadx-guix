#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"

TEST_PARAM test_parameter = {
    "new_test", /* Test name */
    0, 0, 0, 0  /* Define the coordinates of the capture area.*/
};

int main(int argc, char ** argv)
{
    tx_kernel_enter(); 
    return(0);
}

static VOID control_thread_entry(ULONG input)
{
    int failed_tests = 0;
    UINT status;
    GX_PROMPT *prompt = &button_screen.button_screen_title_1;
    GX_CONST GX_CHAR *text;

    gx_widget_hide(&button_screen); 

    status = gx_prompt_text_get(prompt, &text);
    EXPECT_EQ(GX_INVALID_CANVAS, status);

    if(failed_tests == 0) 
    {
        gx_validation_print_test_result(TEST_SUCCESS);
        exit(0);
    }
    else 
    {
        gx_validation_print_test_result(TEST_FAIL);
        exit(1);
    }
}
