#include <stdio.h>

int reverseInteger(int num) {
    int reversedNum = 0; 
    while (num != 0) {
        int digit = num % 10; 
        reversedNum = reversedNum * 10 + digit; 
        num /= 10; 
    }
    return reversedNum;
}

int main() {
    int originalNumber = 12345;
    int reversedNumber = reverseInteger(originalNumber);
    printf("Số gốc: %d\n", originalNumber);
    printf("Số đảo ngược: %d\n", reversedNumber); 
    return 0;
}