#include <stdio.h>
#include <stdbool.h>

int main(){

    float temperature = 0.0f;
    float celsius_to_farenheit = 0.0f;
    float farenheit_to_celsius = 0.0f;
    char choice;



    printf("Temperature Conversion Program\n");
    
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    
    while(true){

        printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
        scanf("%c",&choice);
        while(getchar()!='\n');

        if(choice == 'C'){

            while(true){
                printf("Enter the temprature: ", &temperature);
                scanf("%f", &temperature);
                celsius_to_farenheit = (temperature * 9/5) + 32;
                printf("%.2f Celsius is equal to %.2f Fahrenheit", temperature, celsius_to_farenheit);
                break;
            }
        }
        else if (choice == 'F')
        {
            printf("Enter the temprature: ", &temperature);
            scanf("%f", &temperature);
            farenheit_to_celsius = (temperature - 32) * 5.0/9.0;
            printf("%.2f Farenheit is equal to %.2f Celsius", temperature, farenheit_to_celsius);
            break;
        }
        else{

            printf("Invalid Choice, Try again\n");
        }
    }

    return 0;
}