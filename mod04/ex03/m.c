#include "stdlib.h"

int main ()
{
    int *f = malloc(4);

    f = NULL;
    system("leaks a.out");
}