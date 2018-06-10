/*
** EPITECH PROJECT, 2017
** tests_add_it
** File description:
** tests_add_it
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void	redirect_all_std1(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(put_nbr1, test_put_nbr1, .init = redirect_all_std1)
{
	my_put_nbr(42);
	cr_assert_stdout_eq_str("42");
}

Test(put_nbr2, test_put_nbr2, .init = redirect_all_std1)
{
	my_put_nbr(1);
	cr_assert_stdout_eq_str("1");
}

Test(put_nbr3, test_put_nbr3, .init = redirect_all_std1)
{
	my_put_nbr(20000);
	cr_assert_stdout_eq_str("20000");
}

Test(put_nbr4, test_put_nbr4, .init = redirect_all_std1)
{
	my_put_nbr(-12);
	cr_assert_stdout_eq_str("-12");
}
