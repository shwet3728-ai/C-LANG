#include <stdio.h>
int main()
{
    int choice;
    float pound = 0.0f;
    float kilo = 0.0f;
    printf("Mass converter\n");
    printf("1. For kilo to pounds\n");
    printf("2. For pound to kilo\n");
    printf("select 1 or 2:");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter your weight in kilo ");
        scanf("%f", &kilo);
        pound = kilo * 0.453592;
        printf("%.fkilo is equal to %.f pounds ", kilo, pound);
    }
    else if (choice == 2)
    {
        printf("Enter your weight ");
        scanf("%f", &pound);
        kilo = pound * 2.20462;
        printf("%.2f kilo is equal to %.2f pounds ", pound, kilo);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}