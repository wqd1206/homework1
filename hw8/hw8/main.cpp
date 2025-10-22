#include <stdio.h>

int main(void) {
    double weight, height, bmi;

    printf("請輸入體重(公斤)：");
    scanf_s("%lf", &weight);

    printf("請輸入身高(公尺)：");
    scanf_s("%lf", &height);

    bmi = weight / (height * height);

    printf("\n您的BMI為：%.2f\n", bmi);

    if (bmi < 18.5)
        printf("體重過輕\n");
    else if (bmi < 25)
        printf("正常體重\n");
    else if (bmi < 30)
        printf("過重\n");
    else
        printf("肥胖\n");

    return 0;
}
