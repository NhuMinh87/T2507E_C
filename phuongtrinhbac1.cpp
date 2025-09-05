#include <stdio.h>

int main(){
    int a;
    printf("Nhap a=\n");
    scanf("%d",&a);
    int b;
    printf("Nhap b=\n");
    scanf("%d",&b);   

    if(a == 0){
        if(b==0){
            printf("Phuong trinh vo so nghiem");
    }else{
            printf("Phuong trinh vo nghiem");
    }
}else{
    float x;
    x=-b/(float) a;
    printf("Nghiem cua phuong trinh: %f",x);
}
}
