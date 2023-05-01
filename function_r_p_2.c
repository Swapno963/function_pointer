#include<stdio.h>
// we can declear function before main and work after main function
int sum(int x, int y); // if i don't declare it hear then might het error
int main()
{
    printf("%d",sum(3,9));
    return 0;
}
int sum(int x, int y){
    return x + y;
}
