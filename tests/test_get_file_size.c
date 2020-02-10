/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stddef.h>
#include "bsq.h"

const int test_file_size = 113;
const char test_file_path[] = "tests/test_files/test_file";

Test(get_file_size, basic_test)
{
    cr_assert_eq(get_file_size(test_file_path), test_file_size);
}

Test(get_file_size, unknown_file)
{
    cr_assert_eq(get_file_size("a file"), 0);
}

Test(get_file_size, denied_permission)
{
    cr_assert_eq(get_file_size("locked"), 0);
}

Test(get_file_size, invalid_file_size)
{
    cr_assert_eq(get_file_size("a file"), 0);
}