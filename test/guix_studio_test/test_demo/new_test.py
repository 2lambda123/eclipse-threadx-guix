import os
import sys
import time

import test_constants
import test_utils


def get_test_header():
    notes = "*             <Test Name>                             *\n"
    notes += "*                                                     *\n"
    # Add any additional notes or instructions here

    return notes

def new_test(generate, screenshot):
    test_utils.output_test_header(get_test_header())
    test_utils.setup(generate, screenshot, <golden_file_name>)

    # Implement the test case here, following the provided instructions

    test_utils.write_end(<test_name>)
