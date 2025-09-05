#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int n = sizeof(mang) / sizeof(mang[0]);      
    int tongSoLe = 0;
    int soLuongSoLe = 0;

    printf("Các phần tử trong mảng là: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
        if (mang[i] % 2 != 0) { 
            tongSoLe += mang[i];   
            soLuongSoLe++;        
        }
    }
    printf("\n");

    if (soLuongSoLe > 0) {
        float trungBinhCong = (float)tongSoLe / soLuongSoLe;
        printf("Tổng các số lẻ: %d\n", tongSoLe);
        printf("Số lượng số lẻ: %d\n", soLuongSoLe);
        printf("Trung bình cộng các số lẻ: %.2f\n", trungBinhCong);
    } else {
        printf("Không có số lẻ nào trong mảng.\n");
    }

    return 0;
}