#include <stdio.h>

void rotateArrayLeft(int arr[], int n, int k) {
    
    k = k % n;

   
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

  
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Mảng ban đầu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateArrayLeft(arr, n, k);

    printf("Mảng sau khi xoay trái %d lần: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}