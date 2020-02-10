/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stddef.h>


#include "bsq.h"

Test(get_col_count, basic_test)
{
    char map[] = "....oo.\nhello";
    cr_assert_eq(get_col_count(map), 7);
}

Test(get_col_count, null_line)
{
    char map[] = "\n";
    cr_assert_eq(get_col_count(map), 0);
}

Test(get_col_count, advanced_get)
{
    char map[] = ".\nez";
    cr_assert_eq(get_col_count(map), 1);
}

Test(get_col_count, no_trailing_new_line)
{
    char map[] = "....ooooo..oo.oo.oooooo....o";
    cr_assert_eq(get_col_count(map), 0);
}