
// variable = A reusable container for a value.
//            Behaves as if it were the value it contains.

// ================= DATA TYPES =================

// int = whole numbers (4 bytes in modern systems)
// example: 10
// printf format: %d

// float = single-precision decimal number (4 bytes)
// example: 9.4
// printf format: %f

// double = double-precision decimal number (8 bytes)
// example: 3.14
// printf format: %lf

// char = single character (1 byte)
// example: 'A'
// printf format: %c

// char[] = array of characters (string)
// example: "hello"
// printf format: %s

// bool = true or false (1 byte, requires <stdbool.h>)
// example: true / false
// printf format: %d (prints 1 for true, 0 for false)
#include <stdio.h>
#include <stdbool.h>
    int main()
    {
        int age = 30;
        int lho = 10;
        int class = 10;
        float gpa = 9.4;
        float price = 99.999;
        double pi = 3.9876544567976;
        char grade = 'A';
        char papa[] = "Bibeka nand yadav";
        char food[] = "pizza";
        bool isonline = 1;
        printf("%d\n", isonline);

        printf("my fav food is %s\n", food);
        printf("my father name is %s \n", papa);

        printf("my grade is %c\n .", grade);
        printf("my lho is %d\n", lho);
        printf("my age is %d\n", age);
        printf("my brother study in class %d\n", class);
        printf("my current gpa is %f\n", gpa);
        printf("current price of my charger id %f.\n", price);
        printf(" The value of the pi is %.15f\n", pi);
        return 0;
    }