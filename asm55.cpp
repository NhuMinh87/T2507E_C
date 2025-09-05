#include <stdio.h>
int main()
{
  int i, n, temp;
  int max = 0;

  do
  {
    printf("\nNhập vào số nguyên dương n: ");
    scanf("%d", &n);
  }while(n < 0 && printf("\nSố n phải lớn hơn hoặc bằng 0!!"));
  temp = n;
 
  if(n == 0)
    max = 0;

  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
  printf("\nChữ số lớn nhất trong %d là: %d",temp, max);
}