#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

    int age = -1;
    bool isstudent = true;

    /*
    if (age >=18)
    {
        printf("You are an adult!");
    }
    else if (age < 18 )
    {
        printf("You are still a child!");
    }
    else
    {
        printf("You are a newborn!");
    }
        

    if(isstudent){

        printf("You are a student!");
    }
    else{

        printf("you are not a student!");

    }
        */

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    if(strlen(name) == 0 ){

         printf("Nothing was entered! try again!");  
    }
    else{
        printf("%s", name);
    }
    
    return 0;
}