#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid.\n");

        if (a == b && b == c) {
            printf("It is equilateral.\n");
        }
   
        else if (a == b || b == c || a == c) {
            printf("It is isosceles.\n");
        }
 
        else if ((a*a + b*b == c*c) ||
                 (a*a + c*c == b*b) ||
                 (b*b + c*c == a*a)) {
            printf("It is right-angled.\n");
        }

        else {
            printf("It is scalene.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }
       return 0; }