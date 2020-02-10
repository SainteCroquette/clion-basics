/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include <criterion/criterion.h>
#include <stddef.h>
#include "bsq.h"
const char test_map_res[] = ".........o\n"
                  "..........\n"
                  "........o.\n"
                  ".o..o.....\n"
                  ".xxxx.....\n"
                  ".xxxx..o..\n"
                  "oxxxx.....\n"
                  ".xxxx.....\n"
                  ".....o....\n"
                  "....o..o..\n";
Test(sweep_mines, basic_test)
{
    char test_map[] = ".........o\n"
                      "..........\n"
                      "........o.\n"
                      ".o..o.....\n"
                      "..........\n"
                      ".......o..\n"
                      "o.........\n"
                      "..........\n"
                      ".....o....\n"
                      "....o..o..\n";

    sol_t sol = {4, 7, 4};
    sweep_mines(test_map, sol, 10);
    cr_assert_str_eq(test_map, test_map_res);
}
