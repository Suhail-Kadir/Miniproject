#include <stdio.h>

int main()
{
    char op, ch;

    printf("<-------- Welcome to my Dhaba ----------> \n\n");
    printf("Select what you want -> \n");
    printf("1. Starter\n2. Main course\n3. Dessert\n4. Exit\n");

    scanf("%c", &op);

    switch(op)
    {
        case '1':
        printf("You have choosed starter\n");
        printf("1. Chicken 65\n2. Dragon chicken\n3. Paneer Pakoda\n");
        break;

        case '2':
        printf("You have choosed main course\n");
        printf("1. \n2. \n3.\n");
        break;

        case '3':
        printf("You have choosed dessert\n");
        printf("1. \n2. \n3.\n");
        break;

        case '4':
        printf("Thank you visit again\n");
        break;

        default:
        printf("Sorry, try next time\n");

    }
}