
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(char const *format, ...);

int	main(void)
{
	char *n = "";

	ft_printf("Simple test\n");
	ft_printf("");
	ft_printf("---Format---");
	printf("\n");
	printf("%d\n", 0);
	ft_printf("%d\n", 0);
	printf("%d\n", 42);
	ft_printf("%d\n", 42);
	printf("%d\n", 1);
	ft_printf("%d\n", 1);
	printf("%d\n", 5454);
	ft_printf("%d\n", 5454);
	printf("%d\n", (int)2147483647);
	ft_printf("%d\n", (int)2147483647);
	printf("\n");
	printf("%d\n", (int)2147483648);
	ft_printf("%d\n", (int)2147483648);
	printf("\n");
	printf("%d\n", (int)-2147483648);
	ft_printf("%d\n", (int)-2147483648);
	printf("\n");
	printf("%d\n", (int)-2147483649);
	ft_printf("%d\n", (int)-2147483649);
	printf("\n");
	ft_printf("%x\n", 0);
	printf("%x\n", 0);
	ft_printf("%x\n", 42);
	printf("%x\n", 42);
	ft_printf("%x\n", 1);
	printf("%x\n", 1);
	ft_printf("%x\n", 5454);
	printf("%x\n", 5454);
	ft_printf("%x\n", (int)2147483647);
	printf("%x\n", (int)2147483647);
	printf("\n");
	ft_printf("%x\n", (int)2147483648);
	printf("%x\n", (int)2147483648);
	printf("\n");
	ft_printf("%x\n", (int)-2147483648);
	printf("%x\n", (int)-2147483648);
	printf("\n");
	ft_printf("%x\n", (int)-2147483649);
	printf("%x\n", (int)-2147483649);
	printf("\n");
	ft_printf("%s\n", "");
	printf("%s\n", "");
	ft_printf("%s\n", "toto");
	printf("%s\n", "toto");
	ft_printf("%s\n", "wiurwuyrhwrywuier");
	printf("%s\n", "wiurwuyrhwrywuier");
	ft_printf("%s\n", n);
	printf("%s\n", n);
	ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", n);
	printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", n);
	ft_printf("\n--Mixed---\n");
	printf("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	ft_printf("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	ft_printf("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	printf("\n");
	ft_printf("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", n);
	printf("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", n);
	ft_printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", n);
	printf("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", n);
}
