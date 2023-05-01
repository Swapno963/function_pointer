#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x,a;
    scanf("%d %d",&x,&a);
    
    // cell gives upper value, it can take float and double and return int
    //int ans = ceil(x);
    
    // the main diffrence of floor is, it gives lower valu
    //int ans = floor(x);

    // round apply ceil if the decimal part is .5 or greter. else it apply floor
    // float ans = round(x);

    // squrt takes int, float, double and return floting point
    //double ans = sqrt(x);

    // x to the power a,
    //int ans = pow(x,a);

    // abs give posite value, but it can't work with long long int,
    // for long long int we need to use if else to convert
    int ans = abs(x);

    printf("%d",ans);
    return 0;
}