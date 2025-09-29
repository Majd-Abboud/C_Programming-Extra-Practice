#include <stdio.h>

int main(){

    int x = 12;
    int y = 7;
    int z;

    z = x + y;
    z = x - y;
    z = x * y;
    z = x / y;
    z = x % y;

    x++;
    x+=3;
    x-=3;
    x*=3;
    x/=3;

    printf("The sum of x and y is %d\n",x);
    printf("%d",x);
    return 0;
}