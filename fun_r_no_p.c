#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}
int main()
{
    // if we give parameter though fun don't take, then it will ignore the parameter

    // but if fun is void type then it give this error: "too many arguments to function"
    printf("%d",sum(3));

    return 0;
}