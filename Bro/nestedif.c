#include <stdio.h>
#include <stdbool.h>
int main()
{
    float price = 10.00;
    bool isSenior, isStudent = 0;
    float off = 0.0f;
    int age;
    printf("Enter the age:\n");
    scanf("%d", &age);
    if (age > 20)
    {
        isSenior = 1;
        if (age < 60)
        {
            isStudent = 1;
        }
    }
    else if (age < 20 && age >= 4)
    {
        isSenior = 0;
        isStudent = 1;
    }

    if (isStudent && isSenior)
    {
        printf("You will get discount 30%\n");
        off = price - (0.3 * price);
        printf("%.2f", off);
    }
    else if (isStudent)
    {
        printf("You will get discount 20%\n");
        off = price - (0.2 * price);
        printf("%.2f", off);
    }
    else if (isSenior)
    {
        printf("You will get discount 10%\n");
        off = (price - (0.1 * price));
        printf("%.2f", off);
    }
    else
    {
        printf("You are not elligible");
    }
    return 0;
}