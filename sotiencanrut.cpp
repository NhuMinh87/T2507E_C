#include <stdio.h>

int main() {
    int soTienCanRut;
    int menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000};
    int soLuongTungLoai[6] = {0}; 

    
    printf("Nhập số tiền cần rút (bội số của 10,000): ");
    scanf("%d", &soTienCanRut);

    
    if (soTienCanRut <= 0 || soTienCanRut % 10000 != 0) {
        printf("Số tiền không hợp lệ. Vui lòng nhập bội số của 10,000 và lớn hơn 0.\n");
        return 1; 
    }

   
    for (int i = 0; i < 6; i++) {
        soLuongTungLoai[i] = soTienCanRut / menhGia[i];
        soTienCanRut %= menhGia[i];
    }

 
    printf("Số lượng từng loại tiền cần trả:\n");
    for (int i = 0; i < 6; i++) {
        if (soLuongTungLoai[i] > 0) {
            printf("- Mệnh giá %d: %d tờ\n", menhGia[i], soLuongTungLoai[i]);
        }
    }
 return 0; 
}