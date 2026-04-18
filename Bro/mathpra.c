// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double radius = 0.0;
//     double volume = 0.0;
//     double area = 0.0;
//     double surfacearea = 0.0;
//     const double PI = 3.14159;
//     printf("Enter the radius: ");
//     scanf("%lf", &radius);

//     area = PI * pow(radius, 2);
//     surfacearea = 4 * PI * pow(radius, 2);
//     volume = (4.0 / 3.0 ) * PI * pow(radius, 3);
//     printf("Area: %.2lf\n", area);
//     printf("Area: %.2lf\n", surfacearea);
//     printf("Area: %.2lf\n", volume);
//     return 0;
// }

// compound calcaulater
#include <stdio.h>
#include <math.h>
int main()
{
    double principle = 0.0;
    double rate = 0.0;
    int time = 0.0;
    double compound_interest = 0.0;
    double times_comp =0.0;
    printf("Enter the Principle Amount: ");
    scanf("%lf", &principle);
    printf("Enter the Rate interest: ");
    scanf("%lf", &rate);
    printf("Enter the time: ");
    scanf("%d", &time);
    printf("Enter the compound per year: ");
    scanf("%lf", &times_comp);
    compound_interest = principle * pow(1 + (rate/100) / times_comp, times_comp * time);

    printf("After %d years you will have  %.2lf", time,compound_interest);

    return 0;
}