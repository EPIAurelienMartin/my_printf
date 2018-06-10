/*
** EPITECH PROJECT, 2017
** test
** File description:
** nbrhexa
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void    redirect_all_std3(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(put_nbr_hexa2, test_put_nbr_hexa2, .init = redirect_all_std3)
{
	my_put_nbr_hexa(42);
	cr_assert_stdout_eq_str("2a");
}

Test(put_nbr_hexa3, test_put_nbr_hexa3, .init = redirect_all_std3)
{
	my_put_nbr_hexa(42);
	cr_assert_stdout_eq_str("2a");
}

Test(put_nbr_hexa4, test_put_nbr_hexa4, .init = redirect_all_std3)
{
	my_put_nbr_hexa(123456789);
	cr_assert_stdout_eq_str("75bcd15");
}

Test(put_nbr_hexa5, test_put_nbr_hexa5, .init = redirect_all_std3)
{
	my_put_nbr_hexa(0);
	cr_assert_stdout_eq_str("0");
}
