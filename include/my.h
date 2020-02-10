/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** prototypes.h
*/


#ifndef LIB_MY_H
#   define LIB_MY_H

#include <stddef.h>
#include <stdarg.h>
#include <bits/types/FILE.h>

void my_putchar(char c);

int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);
int my_isneg(int n);
int my_print_comb(void);
int my_print_comb2(void);
int my_put_nbr(int nb);
int my_print_combn(int n);

int my_swap(int *a, int *b);
int my_putstr(char const *str);
void my_puttab(char const * const * tab);
int my_strlen(char const *str);
int my_strlen_until(char const *str, char until);
char *my_evil_str(char *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);
int my_atoi(char const *str);

int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int count_valid_queens_placements(int n);

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_revstr_dup(char *str);
char *my_strstr(char *str, char const *to_find);
int my_str_is_in_str(char const *s1, char const *s2);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_is_alpha(char c);
int my_is_num(char c);
int my_is_alpha_num(char c);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_is_alphanum(char const *str);
int my_str_isprintable(char const *str);
int my_putnbr_base(int nbr, char const *base);
char *my_return_nbr_base(int nbr, char const *base);
int my_put_n_nbr_base(int nbr, char const *base, int n);
int my_getnbr_base(char const *str, char const *base);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);

char *my_strconcat(char const *s1, char const *s2);

char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_strdup_until(char const *src, char until);
char *my_strdup_alpha(char const * str);
char *my_strdup_alpha_num(char const * str);

int my_memcpy(void *src, void *dest, size_t bytes);
void *my_memdup(void *src, size_t bytes);

int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char const *str);
char **split_whitespaces(char const *str);

void print_bits(void *ptr, size_t bytes);

char *get_next_line(int fd);

void *my_realloc(void *ptr, size_t size);

void *sfree(void *ptr);

int my_printf(char *format, ...);
int my_fprintf(FILE *stream, char *format, ...);
int my_dprintf(int fd, char *format, ...);
int my_sprintf(char *str, char *format, ...);
int my_snprintf(char *str, size_t bytes, char *format, ...);

int my_vprintf(char *format, va_list ap);
int my_vfprintf(FILE *stream, char *format, va_list ap);
int my_vdprintf(int fd, char *format, va_list ap);
int my_vsprintf(char *str, char *format, va_list ap);
int my_vsnprintf(char *str, size_t bytes, char *format, va_list ap);

char *get_next_line(int fd);
int get_newline(char const *str);
char *my_strncat_alloc(char const *s1, char const *s2, int n);
char *magic_line(char const *buff, char **stack, int stream_open);
#endif //LIB_MY_H
