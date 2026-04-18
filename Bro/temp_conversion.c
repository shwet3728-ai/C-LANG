#include<stdio.h>
int main ()
{
    int choice ;
    float farn = 0.0f;
    float celc =0.0f;
    printf("Temperature converter\n");
    printf("1. For farn to celc\n");
    printf("2. For celc to farn\n");
    printf("Select any one(1 or 2)\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("Enter the Temperturein far\n");
        scanf("%f",&farn);
        celc = (farn - 32) * (5.0/9.0);
        printf( "%.2f is equal to %.2f",farn , celc);
    }
    else if (choice == 2)
    {
        printf("Enter the Temperturein calc\n");
        scanf("%f",&celc);
        farn = celc * (9.0/5.0) + 32;
        printf( "%.2f is equal to %.2f",celc , farn);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}