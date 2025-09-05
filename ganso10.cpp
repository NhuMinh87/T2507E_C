#include <stdio.h>
#include <stdlib.h> 

int main() {
    int so1, so2;
    int khoangCach1, khoangCach2;

    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &so1);

    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &so2);

    khoangCach1 = abs(so1 - 10);
    khoangCach2 = abs(so2 - 10);

    if (khoangCach1 < khoangCach2) {
        printf("Số %d gần với 10 hơn.\n", so1);
    } else if (khoangCach2 < khoangCach1) {
        printf("Số %d gần với 10 hơn.\n", so2);
    } else {
        printf("Bằng nhau.\n");
    }

    return 0;
}