// // #include <stdio.h>
// // #include <stdbool.h>

// // int main()
// // {
// //     int age = 0;
// //     printf("Enter the age ");
// //     scanf("%d",&age);
// //     if (age >= 18)
// //     {
// //         printf("you are an adult");
// //     }
// //     else if (age < 0)
// //     {
// //         printf("you are not born ");
// //     }
// //     else if (age == 0)
// //     {
// //         printf("you are born today");
// //     }
// //     else
// //     {
// //         printf("you are a child");
// //     }
// //     return 0;
// // }

// //boolians
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     bool isstudent = 0; //false = 0;
//     if (isstudent == true)
//     {
//         printf("you are a student");
//     }
//     else
//     {
//         printf("you are not the student");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char name[50] = "";
    printf("Enter your name: ");
    fgets(name,sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Your name is %s", name);
    }
    return 0;
}
