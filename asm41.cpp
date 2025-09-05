#include <stdio.h> // Bao gồm thư viện chuẩn để sử dụng printf và scanf

int main() {
    int n; // Khai báo biến n để lưu số nguyên nhập vào

    // Nhập số nguyên n từ bàn phím
    printf("Nhập số nguyên n: ");
    scanf("%d", &n); // Đọc giá trị từ người dùng và lưu vào biến n

    printf("Các số lẻ nhỏ hơn %d là:\n", n); // In ra thông báo

    // Vòng lặp để duyệt qua các số từ 1 đến n-1
    for (int i = 1; i < n; i++) {
        // Kiểm tra xem số i có phải là số lẻ không
        if (i % 2 != 0) {
            printf("%d ", i); // Nếu là số lẻ, in ra số đó
        }
    }

    printf("\n"); // In một dòng mới để kết thúc
    return 0; // Trả về 0 để chỉ thị chương trình kết thúc thành công
}