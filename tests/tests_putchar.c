/*
** EPITECH PROJECT, 2017
** put
** File description:
** char
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void    redirect_all_stdp(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(put_putchar1, test_putchar1, .init = redirect_all_stdp)
{
	my_putchar('4');
	cr_assert_stdout_eq_str("4");
}

Test(put_putchar2, test_putchar2, .init = redirect_all_stdp)
{
	my_putchar('A');
	cr_assert_stdout_eq_str("A");
}

Test(put_putchar3, test_putchar3, .init = redirect_all_stdp)
{
	my_putchar('a');
	cr_assert_stdout_eq_str("a");
}

Test(put_putchar4, test_putchar4, .init = redirect_all_stdp)
{
	my_putchar('-');
	cr_assert_stdout_eq_str("-");
}
