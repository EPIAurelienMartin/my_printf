/*
** EPITECH PROJECT, 2017
** test
** File description:
** pts
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

Test(putchar, test_putchar_return)
{
	int     r_value = 0;

	r_value = my_putchar('1');
	cr_assert_eq(r_value, 1);
	r_value = my_putchar('A');
	cr_assert_eq(r_value, 1);
	r_value = my_putchar('a');
	cr_assert_eq(r_value, 1);
}

Test(putstr, test_putstr_return)
{
	int     r_value = 0;

	r_value = my_putstr("bonjour");
	cr_assert_eq(r_value, 7);
	r_value = my_putstr("je ne sais pas");
	cr_assert_eq(r_value, 14);
	r_value = my_putstr("-phrase");
	cr_assert_eq(r_value, 7);
}
