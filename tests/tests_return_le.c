/*
** EPITECH PROJECT, 2017
** len
** File description:
** get
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

Test(nb_len, test_return_nb_len)
{
	int     r_value = 0;

	r_value = my_nb_len(42);
	cr_assert_eq(r_value, 2);
	r_value = my_nb_len(123456789);
	cr_assert_eq(r_value, 9);
	r_value = my_nb_len(1);
	cr_assert_eq(r_value, 1);
}

Test(my_strlen, test_return_strlen)
{
	int     r_value = 0;

	r_value = my_strlen("bonjour");
	cr_assert_eq(r_value, 7);
	r_value = my_strlen("123456789");
	cr_assert_eq(r_value, 9);
	r_value = my_strlen("1");
	cr_assert_eq(r_value, 1);
}

Test(my_getnbr, test_return_getnbr)
{
	int     r_value = 0;

	r_value = my_getnb("42");
	cr_assert_eq(r_value, 42);
	r_value = my_getnb("123456789");
	cr_assert_eq(r_value, 123456789);
	r_value = my_getnb("1");
	cr_assert_eq(r_value, 1);
}
