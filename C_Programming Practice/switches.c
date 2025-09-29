#include <stdio.h>

int main(){

    char day_of_week = '\n';

    printf("Please Enter the first letter of any day of the week!: ");
    scanf("%c", &day_of_week);
    

    switch(day_of_week){

        case 'M':
        printf("Today is Monday");
        break;

        case 'T':
        printf("Today is Tuesday");
        break;

        case 'W':
        printf("Today is Wednesday");
        break;

        case 'R':
        printf("Today is Thursdays");
        break;

        case 'F':
        printf("Today is Friday");
        break;

        case 'S':
        printf("Today is Saturday");
        break;

        case 'N':
        printf("Today is Sunday");
        break;

        default:
        printf("please only enter a number between 1 through seven");

    }

    return 0;

}