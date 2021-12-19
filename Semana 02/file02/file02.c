#include <stdio.h>
#include "file02.h"

int value1 = 10, value2 = 20;

int main(void){


    printf("O valor da multiplicacao entre %i e %i = %i\n", value1, value2, mult(value1, value2));


    return 0;
}