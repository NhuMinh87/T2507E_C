#include <stdio.h>

int main() {
    int so; 

    printf("Nhập một chữ số (0-9): ");
    scanf("%d", &so); 

    switch (so) {
        case 0:
            printf("Không\n");
            break; 
        case 1:
            printf("Một\n");
            break;
            case 2:
            printf("Hai\n");
            break;
        case 3:
            printf("Ba\n");
            break;
        case 4:
            printf("Bốn\n");
            break;
        case 5:
            printf("Năm\n");
            break;
        case 6:
            printf("Sáu\n");
            break;
        case 7:
            printf("Bảy\n");
            break;
        case 8:
            printf("Tám\n");
            break;
        case 9:
            printf("Chín\n");
            break;
        default:
            printf("Chữ số không hợp lệ (phải từ 0 đến 9)\n"); 
            break;
    }

    return 0; 
}