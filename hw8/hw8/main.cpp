#include <stdio.h>

int main(void) {
    double weight, height, bmi;

    printf("�п�J�魫(����)�G");
    scanf_s("%lf", &weight);

    printf("�п�J����(����)�G");
    scanf_s("%lf", &height);

    bmi = weight / (height * height);

    printf("\n�z��BMI���G%.2f\n", bmi);

    if (bmi < 18.5)
        printf("�魫�L��\n");
    else if (bmi < 25)
        printf("���`�魫\n");
    else if (bmi < 30)
        printf("�L��\n");
    else
        printf("�έD\n");

    return 0;
}
