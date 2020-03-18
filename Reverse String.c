#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_reverse(char *str_in)
{
	char tmp;
	size_t ii = 0;
	size_t len = strlen(str_in);
	
for (ii = 0; ii<len / 2; ii++)
	{
		tmp = str_in[ii];
		str_in[ii] = str_in[len - ii - 1];
		str_in[len - ii - 1] = tmp;
	}
}
char main()
{
	char pap[30]="Are we gonna pass algorithms?";
	
	printf("pap=%s\n", pap);
	str_reverse(pap);
	printf("pap=%s\n", pap);
}
