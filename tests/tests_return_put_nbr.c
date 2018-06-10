/*
** EPITECH PROJECT, 2017
** tests_add_it
** File description:
** tests_add_it
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

Test(put_nbr_bin, test_put_nbr_binary)
{
	int	r_value = 0;

	r_value = my_put_nbr_bin(10);
	cr_assert_eq(r_value, 4);
	r_value = my_put_nbr_bin(42);
	cr_assert_eq(r_value, 6);
}

Test(put_nbr, test_put_nbr_)
{
	int	r_value = 0;

	r_value = my_put_nbr(10);
	cr_assert_eq(r_value, 2);
	r_value = my_put_nbr(42);
	cr_assert_eq(r_value, 2);
}

Test(put_nbr_hexa, test_put_nbr_hexa)
{
	int	r_value = 0;

	r_value = my_put_nbr_hexa(10);
	cr_assert_eq(r_value, 1);
	r_value = my_put_nbr_hexa(42);
	cr_assert_eq(r_value, 2);
}

Test(put_nbr_hexam, test_put_nbr_hexa_cap)
{
	int	r_value = 0;

	r_value = my_put_nbr_hexam(10);
	cr_assert_eq(r_value, 1);
	r_value = my_put_nbr_hexam(42);
	cr_assert_eq(r_value, 2);
}

Test(put_nbr_octal, test_put_nbr_octal)
{
	int	r_value = 0;

	r_value = my_put_nbr_octal(10);
	cr_assert_eq(r_value, 2);
	r_value = my_put_nbr_octal(42);
	cr_assert_eq(r_value, 2);
}
