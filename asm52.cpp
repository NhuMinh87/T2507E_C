#include <stdio.h>

// Hàm tìm ước chung lớn nhất (UCLN)
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tìm bội chung nhỏ nhất (BCNN)
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}
int main() {
    int a, b;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Cac so phai lon hon 0.\n");
    } else {
        int uoc_chung_lon_nhat = ucln(a, b);
        int boi_chung_nho_nhat = bcnn(a, b);

        printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, uoc_chung_lon_nhat);
        printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, boi_chung_nho_nhat);
    }

    return 0;
}