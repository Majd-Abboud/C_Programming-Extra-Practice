#include <stdio.h>

int main(){

    int age;
    float gpa;
    char grade;
    char name[30];
    char letter;

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    while (getchar() != '\n');
    printf("Enter your Grade: ");
    scanf("%c", &grade);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);


    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);
    printf("%s\n",name);
    printf("%c\n",letter);

    return 0;
}