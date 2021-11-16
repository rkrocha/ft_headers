#include "../ft_limits.h"
#include <stdio.h>

int	main(void)
{
	printf("CHAR:\n%d\n%d\n%d\n%d\n%d\n%d\n\n", CHAR_BIT, CHAR_MIN, CHAR_MAX,
	SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);
	printf("SHORT:\n%d\n%d\n%d\n\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
	printf("INT:\n%ld\n%d\n%u\n\n", INT_MIN, INT_MAX, UINT_MAX);
	// printf("LONG:\n%ld\n%ld\n%lu\n\n", LONG_MIN, LONG_MAX, ULONG_MAX);
	// printf("SHORT:\n%llu\n%llu\n%llu\n\n", LLONG_MIN, LLONG_MAX, ULLONG_MAX);
	return (0);
}