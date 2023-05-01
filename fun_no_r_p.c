#include<stdio.h>

void sum(int x, int y)
{
    int s = x + y;
    //return; // code stop exucution whtn it foun return like break in loop, though it don't work in function
    printf("%d",s);
    //return s;  // if we set function type void but we retun something then we gett error with message : 'return' with a value, in function returning void
 }
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}