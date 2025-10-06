#include<stdio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter Weight in kilograms:");
    scanf("%f",&weight);
    printf("Enter Height in meters:");
    scanf("%f",&height);
    bmi = weight / (height * height);
     printf("Your BMI is: %f\n", bmi);
    if (bmi<=18.5)
    {
        printf("Underweight");
    }
    else if ( bmi>18.5 && bmi<=24.9)
    {
        printf("normal weight");
    }
    else if ( bmi>=25 && bmi<=29.9)
    {
        printf("Overweight");
    }
     else
    {
        printf("Obese");
    }

    return 0;
}