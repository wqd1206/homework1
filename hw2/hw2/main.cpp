#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int a, b, c;
    int largest, smallest;

    printf("輸入三個數字: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;    
    smallest = a;   

    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("Largest is %d\n", largest);
    printf("Smallest is %d\n", smallest);

    return 0;
}
