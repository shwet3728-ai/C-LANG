#include <stdio.h>
int main()
{
    int dayofweek = 0;
    printf("Enter Any Number From 1 to 7:\n");
    scanf("%d",&dayofweek);
    
    switch (dayofweek)
    {
    case 1:
        printf("Its monday");
        break;
    case 2:
        printf("Its tuesday");
        break;
    case 3:
        printf("Its wednesday");
        break;
    case 4:
        printf("Its thursday");
        break;
    case 5:
        printf("Its friday");
        break;
    case 6:
        printf("Its saturday");
        break;
    case 7:
        printf("Its sunday");
        break;
    default:
        printf("Plzz select from 1-7..");
        break;
    }
    return 0;
}