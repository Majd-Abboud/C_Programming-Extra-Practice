#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00f;
    bool isStudent = true;
    bool isSenior =  false;

    if(isStudent && isSenior){

        price *= 0.7;
        printf("You are a student and a senior, you recieve a 30 percent discount: $%.2f", price);

    }else if (isStudent)
    {
        price *= 0.9;
        printf("you are a student and recieve a 10 percent discount: $%.2f", price);
    }
    else if (isSenior)
    {
        price *=0.8;
        printf("you are a senior and recieve a 20 percent discount: $%.2f", price);
    }
    else{
        printf("No discount, price is %f",price);
    }
    
    
    
    
    return 0;
}