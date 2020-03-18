#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_numbers(int *a, int *b) 
{
	int temp_a = *a;
	*a = *b;
	*b = temp_a;
}

int main(void)
{
	int a;
	int b;
	a = 10;
	b = 45;
			printf("a=%d && b=%d\n", a, b);
			
			swap_numbers(&a, &b);

			printf("a=%d && b=%d\n", a, b);

return 0;
}
