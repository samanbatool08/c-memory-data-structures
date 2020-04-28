#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(void)
{
    f();
}

void f(void)
{
    // allocating 10 spaces in memory
    // changing the 9th character in that memory
    // freeing up memory to avoid memory leak
    int *x = malloc(10 * sizeof(int));
    x[9] = 50;
    printf("You inputted %i.\n", x[9]);
    free(x);
}