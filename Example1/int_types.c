// a Program to print out the data range of a short
#include <stdio.h>
#include <limits.h>
#include <float.h>

// list of functions 
void data_range();
int main(){
    data_range();
    return 0;
}

void data_range(){
    printf("Size short : %d \n" sizeof(short));
    printf("Min Value : %d \n", SHRT_MIN);
    printf("Max Value : %d \n", SHRT_MAX);
}
// basic example for running with a cc or gcc compiler. 