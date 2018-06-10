/*
** EPITECH PROJECT, 2017
** hexa
** File description:
** m
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void    redirect_all_std4(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(put_nbr_hexam1, test_put_nbr_hexam1, .init = redirect_all_std4)
{
	my_put_nbr_hexam(10);
	cr_assert_stdout_eq_str("A");
}

Test(put_nbr_hexam2, test_put_nbr_hexam2, .init = redirect_all_std4)
{
	my_put_nbr_hexam(42);
	cr_assert_stdout_eq_str("2A");
}

Test(put_nbr_hexam3, test_put_nbr_hexam3, .init = redirect_all_std4)
{
	my_put_nbr_hexam(123456789);
	cr_assert_stdout_eq_str("75BCD15");
}

Test(put_nbr_hexam5, test_put_nbr_hexam5, .init = redirect_all_std4)
{
	my_put_nbr_hexam(0);
	cr_assert_stdout_eq_str("0");
}
