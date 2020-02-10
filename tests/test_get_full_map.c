/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "bsq.h"

const char test_file[] = "10\n"
                           ".........o\n"
                           "..........\n"
                           "........o.\n"
                           ".o..o.....\n"
                           "..........\n"
                           ".......o..\n"
                           "o.........\n"
                           "..........\n"
                           ".....o....\n"
                           "....o..o..\n";

Test(get_full_map, basic_test)
{
    char *str = get_full_map("tests/test_files/test_file", 113);
    cr_assert_str_eq(str, test_file);
}

Test(get_full_map, open_failure)
{
    char *str = get_full_map("unknown", 113);
    cr_assert_null(str);
}
