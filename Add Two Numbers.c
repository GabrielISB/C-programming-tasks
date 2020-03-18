
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_two_int(int x, int y)
{
	return x+y;
}

int main (int argc, char** argv)
{
	int firstarg = atoi(argv[1]);
	int secondarg = atoi(argv[2]);
	int result = add_two_int(firstarg, secondarg);
		printf("The sum is %d\n", add_two_int(firstarg, secondarg));
		
return 0;
}
