#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is positive\n");
        if (n%12==0)
        {
            printf("number is even\n");

        }
        else
        {
            printf("Number is odd\n");
        }
    }
    else if (n<0)
    {
        printf("Number is negative\n");

    }
    else{
        printf("Number is Zero\n");
    }
    return 0;
}
