#include <stdio.h>

int kiem_tra_so_nguyen_to(int n) {
    if (n <= 1) {
        return 0; // không phải số nguyên tố
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // không phải số nguyên tố
        }
    }
    return 1; // là số nguyên tố
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (kiem_tra_so_nguyen_to(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;