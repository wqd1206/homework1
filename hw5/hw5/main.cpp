#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("輸入兩個數字: ");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0) {
        printf("Cannot divide by zero.\n");
    }
    else if (num1 % num2 == 0) {
        printf("%d is a multiple of %d\n", num1, num2);
    }
    else {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}
