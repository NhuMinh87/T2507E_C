#include <stdio.h>
#define MAX 100
void nhap(float a[], int &n) {

  do{
    printf("\nNhập số phần tử: ");
    scanf("%d", &n);
    if(n<=0 || n>MAX){
      printf("\nSố phần tử không hợp lệ, xin vui lòng kiểm tra lại");
    }
  }while(n<=0 || n> MAX);
  for(int i = 0; i < n; i++){
    printf("Nhập a[%d]= ", i);
    scanf("%f", &a[i]);
  }
}
float isMin(float a[], int n){
  float min = a[0];
  for(int i = 0; i < n; i++){
    if(a[i] < min){
      min = a[i];
      }
  }
  return min;
}
void xuat(float a[], int n){
  printf("Các phần tử trong mảng là: ");
  for(int i = 0; i < n; i++){
    printf("%f\t",a[i]);
  }
  printf("\nPhần tử nhỏ nhất là: %.1f",isMin(a,n));
  printf("\n---------------------------------\n");
  printf("Chương trình này được đăng tại Freetuts.net");
}
int main() {
  int n;
  float a[MAX];
  nhap(a,n);
  xuat(a,n);
}