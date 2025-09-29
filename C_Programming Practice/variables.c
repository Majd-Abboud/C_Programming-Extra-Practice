#include <stdio.h>
#include <stdbool.h>

int main(){

    //My First Program

    printf("I like Pizza!\n");
    printf("Hello World!\n");



    int age = 25;
    int year = 2025;
    int quantity = 1;
    printf("You are %d years old!\n", age);
    printf("The year is %d\n",year);
    printf("you have ordered %d items!\n",quantity);

    float gpa = 2.5;
    float price = 15.99;
    float temp = -10.1; 
    printf("your gpa is: %.1f: \n", gpa);
    printf("your price is: %.2f \n", price);
    printf("The temp is %.1f degrees celsius!\n",temp);

    double pi = 3.141592653523235253;
    double e = 43.542354354654636364643646346436436346436363;
    printf("These are the number is PI: %lf\n", pi);
    printf("The number of decimals in e is %.5lf: \n",e );

    char grade = 'A';
    char symbol = '!';
    printf("You got an %c on your test",grade);
    printf("my favorite symbol is %c\n", symbol);

    char name[] = "Majd Abboud";
    char fav_food[] = "Burgers";

    printf("Hello my name is %s\n",name);
    printf("My favourite food is %s\n",fav_food);

    bool isOnline = false;

    printf("%s is %d therefore he is not online!\n",name,isOnline);

    return 0;

}