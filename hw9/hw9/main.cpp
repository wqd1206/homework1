#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    double distance, pricePerLitre, kmPerLitre;
    double parkingFee, tollFee, totalCost;

    printf("�п�J�@�Ѫ��`��p�Z��(����)�G");
    scanf("%lf", &distance);

    printf("�п�J�T�o�C���ɻ���(��)�G");
    scanf("%lf", &pricePerLitre);

    printf("�п�J�T�������C���ɥi��p�������ơG");
    scanf("%lf", &kmPerLitre);

    printf("�п�J�@�Ѫ������O(��)�G");
    scanf("%lf", &parkingFee);

    printf("�п�J�@�Ѫ��q��O/�L���O(��)�G");
    scanf("%lf", &tollFee);

    totalCost = (distance / kmPerLitre) * pricePerLitre + parkingFee + tollFee;

    printf("\n�z�@�Ѷ}���W�Z���`��O���G%.2f ��\n", totalCost);

    return 0;
}
