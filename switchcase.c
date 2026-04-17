#include<stdio.h>
int main()
{
    char grade;
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("GOOD\n");
        break;
        case 'c':
        printf("Bad\n");
        break;
        case 'd':
        printf("fail\n");
        break;
        default:
        printf("Fail");

    }
    return 0;
}
