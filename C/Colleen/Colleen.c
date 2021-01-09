#include <stdio.h>

/*
	First
*/

char	*a(void)
{
	return ("#include <stdio.h>%1$c%1$c/*%1$c	First%1$c*/%1$c%1$cchar	*a(void)%1$c{%1$c	return (%3$c%2$s%3$c);%1$c}%1$c%1$cint		main(void)%1$c{%1$c/*%1$c	Second%1$c*/%1$c	printf(a(), 10, a(), 34);%1$c}%1$c");
}

int		main(void)
{
/*
	Second
*/
	printf(a(), 10, a(), 34);
}