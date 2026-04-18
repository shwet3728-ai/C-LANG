#include <stdio.h>
#include<string.h>
void happy(char name[], int age)
{
    printf("Happy birthday to you\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday dear %s \n", name);
    printf("you are %d year old\n \n", age);
}
int main()
{
    char name[92] = "";
    int age;
    printf("Enter your name \n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0' ;
    
    printf("Enter your age \n");
    scanf("%d", &age);
    happy(name, age);

    return 0;
}