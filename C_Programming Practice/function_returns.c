#include <stdio.h>
#include <stdbool.h>


int square(int x){

    int result;
    result = x * x;
    return result;

}

bool ageCheck(int age){

    if(age > 18){
        return true;
    }
    else{
        return false;
    }

}


int main(){

    int num;
    int result;
    int age = 21;

    printf("Enter a number: ");
    scanf("%d",&num);

    result = square(num);

    printf("%d\n", result);

    if (ageCheck(age)){
        printf("you may sign up!");
    }
    else{
        printf("you may not sign up");
    }


    return 0;
    

}