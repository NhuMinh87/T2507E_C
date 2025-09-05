#include <stdio.h>

int main() {
    int n; 
    printf("Nhap so luong phan tu (n): ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;      
    int count = 0;    
    // Duyệt mảng từ vị trí 0 đến n-1
    for (int i = 0; i < n; i++) {
        
        if (i % 2 == 0) {
            
            if (arr[i] % 2 != 0) {
                sum += arr[i]; 
                count++;       
        }
    }

    
    if (count > 0) {
        double average = (double)sum / count; // Tính trung bình cộng (sử dụng double để kết quả không bị mất phần thập phân)
        printf("Trung binh cong cac so le o vi tri chan la: %.2f\n", average);
    } else {
        printf("Khong co so le nao o vi tri chan trong mang.\n");
    }

    return 0;
}