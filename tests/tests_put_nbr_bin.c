/*
** EPITECH PROJECT, 2017
** tests_add_it
** File description:
** tests_add_it
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void	redirect_all_std2(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(put_nbr_bin1, test_put_nbr_binary1, .init = redirect_all_std2)
{
	my_put_nbr_bin(10);
	cr_assert_stdout_eq_str("1010");
}

Test(put_nbr_bin2, test_put_nbr_binary2, .init = redirect_all_std2)
{
	my_put_nbr_bin(42);
	cr_assert_stdout_eq_str("101010");
}

Test(put_nbr_bin3, test_put_nbr_binary3, .init = redirect_all_std2)
{
	my_put_nbr_bin(42);
	cr_assert_stdout_eq_str("101010");
}

Test(put_nbr_bin4, test_put_nbr_binary4, .init = redirect_all_std2)
{
	my_put_nbr_bin(42);
	cr_assert_stdout_eq_str("101010");
}
