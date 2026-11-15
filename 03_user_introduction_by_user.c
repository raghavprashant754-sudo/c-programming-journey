#include <stdio.h>

int main() {
    char name[50], qualification[50];
    int age;

    printf("What is your name: ");
    scanf("%s",name);

    printf("What is your age: ");
    scanf("%d", &age);

    printf("What is your qualification: ");
    scanf("%s",qualification);

    printf("\n--- User Introduction ---\n");
    printf("Welcome %s!\n", name);
    printf("Your age is %d.\n", age);
    printf("You are currently pursuing %s.\n", qualification);
    printf("Thank you.\n");

    return 0;
}