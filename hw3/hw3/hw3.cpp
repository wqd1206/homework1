#include <stdio.h>

int main(void) {
    int number;

    printf("��J�@�ӼƦr: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}
