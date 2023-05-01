#include<stdio.h>
int main()
{
    //we need to tell which data type's address we want to store

    int x = 10;
    //printf("%p\n",&x);

    int* x_address = &x;
    //printf("%p\n",x_address);

    //  dereference 
    
    //printf("%d\n",x_address); // this gives address in integer
    //printf("%d\n",*x_address);  // gives actual value of x

    // hear we assign 500 in address
    // x_address = 500; 
    // printf("%d %d", x, x_address); 

    // to change x value we can do
    *x_address = 500; 
    printf("%d %d", x, x_address); 
    return 0;
}