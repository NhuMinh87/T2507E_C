#include <stdio.h>

int tinh_so_ngay(int ngay, int thang, int nam) {
    int ngay_trong_thang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int so_ngay = 0;

    // Kiểm tra năm nhuận
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
        ngay_trong_thang[2] = 29;
    }

    // Tính số ngày
    for (int i = 1; i < thang; i++) {
        so_ngay += ngay_trong_thang[i];
    }
    so_ngay += ngay;

    return so_ngay;
}
int main() {
    int ngay, thang, nam;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    int so_ngay = tinh_so_ngay(ngay, thang, nam);
    printf("Ngay %d/%d/%d la ngay thu %d trong nam.\n", ngay, thang, nam, so_ngay);

    return 0;
}