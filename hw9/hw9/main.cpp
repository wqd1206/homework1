#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    double distance, pricePerLitre, kmPerLitre;
    double parkingFee, tollFee, totalCost;

    printf("請輸入一天的總行駛距離(公里)：");
    scanf("%lf", &distance);

    printf("請輸入汽油每公升價格(元)：");
    scanf("%lf", &pricePerLitre);

    printf("請輸入汽車平均每公升可行駛的公里數：");
    scanf("%lf", &kmPerLitre);

    printf("請輸入一天的停車費(元)：");
    scanf("%lf", &parkingFee);

    printf("請輸入一天的通行費/過路費(元)：");
    scanf("%lf", &tollFee);

    totalCost = (distance / kmPerLitre) * pricePerLitre + parkingFee + tollFee;

    printf("\n您一天開車上班的總花費為：%.2f 元\n", totalCost);

    return 0;
}
