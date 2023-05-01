#include<stdio.h>
// if we declare any veriable in hear then we can acces it from everywhere
int d = 0;

void fun(void){
    printf("%d",into_main);
}
int main()
{
    // we can not access it outside of main, even we can't access form function outsid of main
    int into_main = 9;

    return 0;
}