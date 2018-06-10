/*
** EPITECH PROJECT, 2017
** put
** File description:
** speacia
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	send_p(va_list arg, int (**print)());
int	modulol(long unsigned int nbr, char *base);
int	decimal_base(int nb, int base);
int	base_decimal(char *str, int base);
int	my_showstr(char const *str);
int	my_putchar(int c);
int	my_putstr(char *str);
int	my_strlen(char const *str);
int	my_len(char *str);
int	my_put_nbr(int nb);
int	my_putnbr_base(int nb, char const *base);
int	my_putnbru_base(unsigned int nb, char const *base);
int	my_put_nbr_unsigned(unsigned int nb);
int	my_put_nbr_bin(int nb);
int	my_put_nbr_hexam(unsigned int nb);
int	my_put_nbr_hexa(unsigned int nb);
int	my_put_nbr_hexap(long nb, char *base);
int	my_put_nbr_octal(int nb);
int	my_printf(const char *format, ...);
int	my_loop(int *i, va_list arg, int (**print)(), const char *format);
int	my_getnbr(char const *str, int *i);
int	my_char_isnum(char str);
void    init_ptr(int (**print)());
int	my_nb_len(int nb);
int	my_other(int *i, va_list arg, int (**print)(), const char *format);
int     my_getnb(char const *str);
int     next_flag(int *i, char const *format);
int     my_foward(char car);
int     is_flag(char car);
int     my_sign_neg(int *i, va_list arg, int (**print)(), const char *format);
int     my_sign_pos(int *i, int nb, const char *format);
int     my_sign_nb(int *i, va_list arg, int (**print)(), const char *format);
int     my_sign(int *i, va_list arg, int (**print)(), const char *format);
int     my_handle_sign(int *i, va_list arg, int (**print)(), const char *forma);
int     my_for_space(int space, int *i, const char *format);
int     check_size_cp(int *i, va_list arg, const char *format);
int     disp_space(int space);
int     my_char_isnum(char str);
