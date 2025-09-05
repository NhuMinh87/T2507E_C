#include <stdio.h>
int main() {
double tinhThue(double thuNhap) {
    double thue = 0;
    if (thuNhap <= 5000000) {
        thue = thuNhap * 0.05;
    } else if (thuNhap <= 10000000) {
        thue = 250000 + (thuNhap - 5000000) * 0.1;
    } else if (thuNhap <= 18000000) {
        thue = 250000 + 500000 + (thuNhap - 10000000) * 0.15;
    } else if (thuNhap <= 32000000) {
        thue = 250000 + 500000 + 1200000 + (thuNhap - 18000000) * 0.2;
    } else if (thuNhap <= 52000000) {
        thue = 250000 + 500000 + 1200000 + 2800000 + (thuNhap - 32000000) * 0.25;
    } else if (thuNhap <= 80000000) {
        thue = 250000 + 500000 + 1200000 + 2800000 + 5000000 + (thuNhap - 52000000) * 0.3;
    } else {
        thue = 250000 + 500000 + 1200000 + 2800000 + 5000000 + 8400000 + (thuNhap - 80000000) * 0.35;
    }
    return thue;
}
    
    double thuNhap;
    printf("Nhap thu nhap ca nhan: ");
    scanf("%lf", &thuNhap);
    
    if (thuNhap < 0) {
        printf("Thu nhap khong hop le.\n");
    } else {
        double thuePhaiNop = tinhThue(thuNhap);
        printf("So tien thue phai nop la: %.2lf VND\n", thuePhaiNop);
    }
    
    return 0;
}