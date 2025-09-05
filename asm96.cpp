#include <stdio.h>

int tongChuSo(int n) {
    int tong = 0;
    while (n > 0) {
    
        int chuSo = n % 10;
        tong += chuSo;
        n /= 10;
    }
    return tong;
}

int main() {
    int so = 12345; 
    int ketQua = tongChuSo(so);
    printf("Tong cac chu so cua %d la: %d\n", so, ketQua);
    return 0;
}