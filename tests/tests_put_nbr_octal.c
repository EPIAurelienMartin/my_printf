/*
** EPITECH PROJECT, 2017
** put
** File description:
** octal
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void    redirect_all_std6(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(put_nbr_octal1, test_put_nbr_octal1, .init = redirect_all_std6)
{
	my_put_nbr_octal(1);
	cr_assert_stdout_eq_str("1");
}

Test(put_nbr_octal2, test_put_nbr_octal2, .init = redirect_all_std6)
{
	my_put_nbr_octal(42);
	cr_assert_stdout_eq_str("52");
}

Test(put_nbr_octal3, test_put_nbr_octal3, .init = redirect_all_std6)
{
	my_put_nbr_octal(0);
	cr_assert_stdout_eq_str("0");
}

Test(put_nbr_octal4, test_put_nbr_octal4, .init = redirect_all_std6)
{
	my_put_nbr_octal(123456789);
	cr_assert_stdout_eq_str("726746425");
}
