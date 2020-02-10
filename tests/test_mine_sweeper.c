/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stddef.h>
#include "bsq.h"

Test(mine_sweeper, basic_test)
{
    int buffer[8]= {0};
    size_t result = mine_sweeper(buffer, '.', 0, 4);
    cr_assert_eq(result, 1);
}

Test(mine_sweeper, basic_test_obstacle)
{
    int buffer[8]= {0};
    size_t result = mine_sweeper(buffer, 'o', 0, 4);
    cr_assert_eq(result, 0);
}

Test(mine_sweeper, basic_test_in_buff)
{
    int buffer[8]= {0, 1, 1, 1, 1, 1, 1, 0};
    size_t result = mine_sweeper(buffer, '.', 7, 4);

    cr_assert_eq(result, 2);
    cr_assert_eq(buffer[7], 2);
}