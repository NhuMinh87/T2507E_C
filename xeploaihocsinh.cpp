#include <stdio.h>

int main() {
    float diem;

    // Nhập điểm từ người dùng
    printf("Nhập điểm của học sinh: ");
    scanf("%f", &diem);

    // Kiểm tra và xếp loại học lực
    if (diem >= 8.0) {
        printf("Học sinh xếp loại: Xuất sắc\n");
    } else if (diem >= 6.5 && diem < 8.0) {
        printf("Học sinh xếp loại: Khá\n");
    } else if (diem >= 5.0 && diem < 6.5) {
        printf("Học sinh xếp loại: Trung bình\n");
    } else if (diem < 5.0 && diem >= 0) { // Kiểm tra thêm điểm không âm
        printf("Học sinh xếp loại: Yếu\n");
    } else {
        printf("Điểm không hợp lệ!\n");
    }

    return 0;
}
