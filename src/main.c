/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

#include "bsq.h"
#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2 || bsq(av[1]) == -1)
    {
        my_dprintf(2, "%s: Invalid arguments\n", av[0]);
        return 84;
    }
    return 0;
}
