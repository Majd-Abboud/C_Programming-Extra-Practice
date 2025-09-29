#include <stdio.h>
#include <stdbool.h>

int main(){

    char choice = ' ';
    float kg = 0.0f;
    float pounds = 0.0f;
    float kg_to_pounds;
    float pounds_to_kg;

    printf("Weight Conversion Calculator\n");

    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to kilograms\n");

  while (true){

    
    printf("Enter your choice (1 or 2): ");
    scanf(" %c", &choice);
    while(getchar()!= '\n');

    if (choice == ' ')
    {
        printf("Please Enter a value!");
    }
    else if (choice == '1'){

        printf("Enter the weight in kilograms: ");
        scanf("%f", &kg);
        kg_to_pounds = kg * 2.2;
        printf("Weight in pounds: %.2flbs",kg_to_pounds);
        break;

    }
    else if (choice == '2')
    {
        printf("Enter the weight in pounds: ");
        scanf("%f",&pounds);
        pounds_to_kg = pounds / 2.2;
        printf("Weight in kilograms: %.2fkg\n", pounds_to_kg);
        break;
    }
    
    
    else{
        printf("Choice not available, try again!\n");
        
    }
}
    
    return 0;
}