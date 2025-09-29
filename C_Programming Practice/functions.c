#include <stdio.h>
#include <string.h>


void happyBirthday(char name[], int age){

    printf("happy birthday to you!\n");
    printf("happy birthday to you!\n");
    printf("happy birthday dear %s!\n", name);
    printf("happy birthday to you!\n");
    printf("You are %d years old\n", age);
    
}

int main(){

    char name[10] = "";
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name,age);
   
    return 0;

}