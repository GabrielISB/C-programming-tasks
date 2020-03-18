#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float main (int argc, char** argv)
{
        float cateto = atof(argv[1]);
        float cateto2 = atof(argv[2]);
        float hypotenuse = (sqrt((cateto*cateto) + (cateto2*cateto2)));

        printf("The hypotenuse is %f\n", hypotenuse);

return 0;
}
