#include <stdio.h>

int main() {
    float so_kwh;
    double tong_tien = 0.0;

    // Nhập số kWh tiêu thụ
    printf("Nhap so kWh tieu thu: ");
    scanf("%f", &so_kwh);

    // Tính tiền điện theo các bậc
    if (so_kwh <= 50) {
        tong_tien = so_kwh * 1678;
    } else if (so_kwh <= 100) {
        tong_tien = (50 * 1678) + ((so_kwh - 50) * 1734);
    } else if (so_kwh <= 200) {
        tong_tien = (50 * 1678) + (50 * 1734) + ((so_kwh - 100) * 2014);
    } else { // so_kwh > 200
        tong_tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + ((so_kwh - 200) * 2536);
    }

    // In kết quả
    printf("Tong tien dien phai tra la: %.2lf VND\n", tong_tien);

    return 0;
}