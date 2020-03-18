#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char** argv)
{
        int year1 = atoi(argv[1]);
        int year2 = atoi(argv[2]);
        int i = year1;

        for(i = atoi(argv[1]); i<= atoi(argv[2]); i++)
        {
                if (i%4 == 0 && i%100!=0 || i%400==0)
                        {
                        printf("%d\n is a leap year", i);
                        }
        }
return 0;
}

