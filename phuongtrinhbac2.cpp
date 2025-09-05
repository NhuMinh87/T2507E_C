#include <stdio.h>
#include <math.h>

int main(){
	int a;
    printf("Nhap a=\n");
    scanf("%d",&a);
    int b;
    printf("Nhap b=\n");
    scanf("%d",&b);
    int c;
    printf("Nhap c=\n");
    scanf("%d",&c);

    if(a==0){
    	if(b==0){
    		if(c==0){
    			printf("Phuong trinh vo so nghiem");
    		}else{	
    			printf("Phuong trinh vo nghiem");
    		}
    }else{
    		float x= -(float)c/b;
    		printf("x=%f",x);
    }   
}else{
	int d= b*b-4*a*c;
	if(d<0){
		printf("Phuong trinh vo nghiem");
	}else{
		if(d==0){
			float x = -(float)b/(2*a);
			printf("x= %f",x);
		}else{
			float x1= (-b+ sqrt(d) )/ (2*a);
			float x2= (-b- sqrt(d) )/ (2*a);
			printf("x1=%f va x2=%f", x1,x2);
		}
	}

}
}