#include <stdio.h>

int main(){

    int age = 24;
    float price = 29.99;
    double pi = 3.14567434;
    char currency = '$';
    char name[] = "Majd Abboud";

    printf("I am %d years old\n", age);
    printf("The price is %c%.2f\n",currency,price);
    printf("PI looks like: %lf\n", pi);
    printf("My name is %s!\n",name);

    float num1 = 1.42;
    float num2 = 10.665;
    float num3 = -100.889;

    printf("%+7.2f\n",num1);
    printf("%+7.2f\n",num2);
    printf("%+7.2f\n",num3);



    return 0;
}