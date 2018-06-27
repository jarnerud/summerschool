#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    // write the control structure as described in the exercise
    // and run the code with different values for i

    i =1115;

    if(i<0){
    	printf("i is less than zero, it is %d",i);
    } else if(i==0){
	printf("i is zero");
    } else if (i>100){
	printf("i is larger than 100, it is %d",i);
    } else { 
	printf("i is something else, it is %d",i);
	}


    return 0;
}
