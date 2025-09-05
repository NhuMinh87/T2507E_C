#include <stdio.h> 


void timMinMax(int arr[], int n, int *min, int *max) {
  
    *min = arr[0];
    *max = arr[0];

  
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i]; 
        }
    }
}
int main() {
    int mang[] = {10, 5, 20, 15, 25}; 
    int n = sizeof(mang) / sizeof(mang[0]); 
    int minVal, maxVal;

   
    timMinMax(mang, n, &minVal, &maxVal);

    
    printf("Doan [a, b] chua tat ca cac gia tri trong mang la: [%d, %d]\n", minVal, maxVal); 

    return 0;
}