/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stddef.h>
#include "bsq.h"

Test(get_line_count, basic_test)
{
    char map[] = "143\nhello";
    cr_assert_eq(get_line_count(map), 143);
}

Test(get_line_count, basic_failure)
{
    char map[] = "hello";
    cr_assert_eq(get_line_count(map), 0);
}

Test(get_line_count, null_line)
{
    char map[] = "0\n";
    cr_assert_eq(get_line_count(map), 0);
}

Test(get_line_count, advanced_get)
{
    char map[] = "0023\nez";
    cr_assert_eq(get_line_count(map), 23);
}

Test(get_line_count, advanced_failure)
{
    char map[] = "0023 \nez";
    cr_assert_eq(get_line_count(map), 0);
}

Test(get_line_count, missing_trailing_space)
{
    char map[] = "0023";
    cr_assert_eq(get_line_count(map), 0);
}