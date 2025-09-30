#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age){

    printf("My name is %s, and I am %d years old!\n", name, age);
}


int main(){

    hello("Majd", 24);

    return 0;
}