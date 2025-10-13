#include <stdio.h>

int main() {
    float num;
    int positive = 0, negative = 0, zero = 0; 
    char ch; 
   do {
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0) {
        positive++;
    }
    else if (num < 0) {
        negative++;
    }
    else {
        zero++;
    }

    printf("Do you want to enter another number? (y/n): ");
    scanf(" %c", &ch); 

} while (ch == 'y' || ch == 'Y');
printf(" positive numbers are %d", positive);
printf("negative numbers are %d",negative);
printf("zeros are %d",zero);
return 0;}

