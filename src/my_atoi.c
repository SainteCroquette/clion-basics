/*
** EPITECH PROJECT, 2019
** PROJECT_NAME
** File description:
** Created by croquette
*/

char *jump_to_word(char const *str)
{
    int i = 0;

    while (str[i] && (str[i] <= ' ' || str[i] >= 127))
        ++i;
    if (str[i] >= '0' && str[i] <= '9' && i
        && (str[i - 1] == '-' || str[i - 1] == '+'))
        i--;
    while (i >= 0 && (str[i] == '-' || str[i] == '+'))
        --i;
    i += (str[i + 1] == '-' || str[i + 1] == '+') ? 1 : 0;
    return (char *)&str[i];
}

int my_atoi(char const *str)
{
    int neg = 1;
    char *s;
    unsigned int nb = 0;

    if (!str)
        return 0;
    s = jump_to_word(str);
    while (s && (*s == '-' || *s == '+')) {
        neg *= (*s == '-') ? -1 : 1;
        ++s;
    }
    while (*s && *s >= '0' && *s <= '9') {
        nb *= 10;
        nb += *s - 48;
        ++s;
    }
    return (((nb > 2147483648 && neg < 0)
            || (nb > 2147483647 && neg > 0)) ? 0 : nb * neg);
}
