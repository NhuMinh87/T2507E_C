#include <stdio.h>

int tim_so(int n) {
    n--; // tìm số nhỏ hơn n
    while (n > 0) {
        if (n % 2 == 0 && n % 3 == 0) {
            return n;
        }
        n--;
    }
    return -1; // không tìm thấy số nào
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int so = tim_so(n);
    if (so != -1) {
        printf("So lon nhat nho hon %d va chia het cho ca 2 va 3 la: %d\n", n, so);
    } else {
        printf("Khong tim thay so nao.\n");
    }

    return 0;