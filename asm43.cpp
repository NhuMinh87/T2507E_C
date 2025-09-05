#include <stdio.h>

int kiem_tra_so_hoan_hao(int n) {
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("%d khong phai la so hoan hao.\n", n);
    } else if (kiem_tra_so_hoan_hao(n)) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }

    return 0;
}