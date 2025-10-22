#include <stdio.h>

int main(void) {
    int number;

    printf("輸入一個數字: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}
