/*
** EPITECH PROJECT, 2017
** test
** File description:
** pustr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void    redirect_all_stds(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(putstr1, test_putstr1, .init = redirect_all_stds)
{
	my_putstr("bonjour");
	cr_assert_stdout_eq_str("bonjour");
}

Test(putstr2, test_putstr2, .init = redirect_all_stds)
{
	my_putstr("AUYG34567(--(-uu");
	cr_assert_stdout_eq_str("AUYG34567(--(-uu");
}

Test(putstr3, test_putstr3, .init = redirect_all_stds)
{
	my_putstr("AZERTYUIOPLKJHGF");
	cr_assert_stdout_eq_str("AZERTYUIOPLKJHGF");
}
