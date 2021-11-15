#include <stdio.h>
#include <stdbool.h>
#include "../ft_bool.h"

static void	test_true(int *test_status)
{
	if (TRUE == true)
		return ;
	*test_status = -1;
	printf("\e[31mtest_true: KO\n");
}

static void	test_var_true(int *test_status)
{
	t_bool	test_var;

	test_var = TRUE;
	if (test_var == true)
		return ;
	*test_status = -1;
	printf("\e[31mtest_var_true: KO\n");
}

static void	test_false(int *test_status)
{
	if (FALSE == false)
		return ;
	*test_status = -1;
	printf("\e[31mtest_false: KO\n");
}

static void	test_var_false(int *test_status)
{
	t_bool	test_var;

	test_var = FALSE;
	if (test_var == false)
		return ;
	*test_status = -1;
	printf("\e[31mtest_var_false: KO\n");
}

int	main(void)
{
	int	test_status;

	test_status = 0;
	test_true(&test_status);
	test_var_true(&test_status);
	test_false(&test_status);
	test_var_false(&test_status);
	if (test_status == -1)
		printf("\e[31mft_bool: KO\n");
	else
		printf("\e[32mft_bool: OK\n");
	return (test_status);
}