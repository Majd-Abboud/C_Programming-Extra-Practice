#include <stdio.h>
#include <math.h>

int main(){

    printf("Compound Interest Calculator\n");

    int principal_amount = 0;
    float interest_rate = 0.0;
    int num_of_years = 0;
    int compound_per_year = 0;
    float total_value = 0.0f;


    printf("Enter the principal amount: ");
    scanf("%d", &principal_amount);

    printf("Enter the interest rate % (r): ");
    scanf("%f",&interest_rate);

    printf("Enter the # of years: ");
    scanf("%d",&num_of_years);

    printf("Enter # of compunded per year (n): ");
    scanf("%d",&compound_per_year);

    interest_rate = interest_rate /100;
    total_value = pow((1+(interest_rate/compound_per_year)),compound_per_year * num_of_years)* principal_amount;

    printf("After %d years, the total will be: %.2f",num_of_years,total_value);



    return 0;
}