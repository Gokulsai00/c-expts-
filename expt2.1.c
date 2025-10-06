#include <stdio.h>

int main() {

    int  length, breadth, area, perimeter;
    printf("Enter length:");
    scanf("%f", &length);
    
    printf("Enter Breadth:");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle is %d", area);
    printf(" perimeter of the rectangle is %d ", perimeter );
    return 0;
}