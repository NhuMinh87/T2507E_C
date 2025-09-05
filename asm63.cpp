#include <stdio.h>

int main() {
    int n; 

   
    printf("Nhập số lượng phần tử của mảng (n): ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int x; 
   
    printf("Nhập số x cần tìm: ");
    scanf("%d", &x);

    int found = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1; 
            break;     
        }
    }

    
    if (found) {
        printf("Số %d có tồn tại trong mảng.\n", x);
    } else {
        printf("Số %d không tồn tại trong mảng.\n", x);
    }

    return 0;
}