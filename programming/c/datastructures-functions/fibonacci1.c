#include <stdio.h>

void add_one_to_both(int *a, int *b)
{
	(*a) += 1;
	(*b) += 1;
}


void main() {

    int a,b;
    a=10;
    b=20;
 

    add_one_to_both(&a, &b);
    printf("The answer is: %d and %d", a,b);

    return 0;
}
