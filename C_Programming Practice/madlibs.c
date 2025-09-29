#include <stdio.h>
#include <string.h>

int main(){


    char adjective_1[15] = "";
    char noun [15] = "";
    char adjective_2[15] = "";
    char verb[15] = "";
    char adjective_3[15] = "";

    printf("Enter an adjective(Description): ");
    fgets(adjective_1, sizeof(adjective_1),stdin);
    adjective_1[strlen(adjective_1)-1] = '\0';

    printf("Enter a noun(animal or person): ");
    fgets(noun, sizeof(noun),stdin);
    noun[strlen(noun)-1]= '\0';

    printf("Enter an adjective(Description): ");
    fgets(adjective_2,sizeof(adjective_2),stdin);
    adjective_2[strlen(adjective_2)-1]= '\0';

    printf("Enter a verb(ending w/ -ing): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]= '\0';

    printf("Enter an adjective(description): ");
    fgets(adjective_3,sizeof(adjective_3),stdin);
    adjective_3[strlen(adjective_3)-1]= '\0';

    printf("\nToday i went to a %s zoo.\n" ,adjective_1);
    printf("In an exhibit, I saw a %s!\n", noun);
    printf("%s was %s and %s\n",noun, adjective_2, verb);
    printf("I was %s", adjective_3);



    return 0;
}