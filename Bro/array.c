#include <stdio.h>
int main()
{
    int numbers[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number\n");
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    // scanf("%d", &numbers[1]);
    // scanf("%d", &numbers[2]);
    // scanf("%d", &numbers[3]);
    // scanf("%d", &numbers[4]);
    
    // char grades[] = {'a', 'B', 'c', 'd', 'e'};
    // char name[] = "Bro code";
    // numbers [0] = 100 ;
    // numbers [1] = 90 ;
    // numbers [2] = 80 ;
    // numbers [3] = 70 ;
    // numbers [4] = 60 ;

    // printf("%d\n", numbers[3]);
    //   printf("%d\n", numbers[0]);
    //     printf("%d\n", numbers[1]);
    //       printf("%d\n", numbers[2]);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d", numbers[i]);
    // }

    // printf("%d\n",sizeof(numbers));
    // printf("%d\n",sizeof(numbers[0]));

    return 0;
}