#include <stdio.h>
#include <string.h>

int main(){

    char item_to_buy[20] = "";
    float price = 0.0f;
    int num_of_items = 0;
    char currency = '$';
    float total_price = 0.0f;

    printf("What Item would you like to buy?: ");
    fgets(item_to_buy,sizeof(item_to_buy),stdin);
    item_to_buy[strlen(item_to_buy) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &num_of_items);

    total_price = num_of_items * price;

    printf("You have bought %d %s\n", num_of_items, item_to_buy);
    printf("The total is: %c%.2f",currency,total_price);

    return 0;

}