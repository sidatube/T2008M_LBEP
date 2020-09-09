#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,p,S=0,C;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	if(a+b>c){
		//lan 1
		if(a+c>b){
			//lan2
			if(b+c>a){
				//lan3
				printf("Day la 3 canh cua 1 tam giac");
				C=a+b+c;
				p=(a+b+c)/2;
				S=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("\nChu vi tam giac la: %0.2f",C);	
				printf("\nDien tich tam giac la: %0.2f",S);
			}else{
				printf("Day khong phai 3 canh cua 1 tam giac");
			}
		}else{
			printf("Day khong phai 3 canh cua 1 tam giac");
		}
	}else{
		printf("Day khong phai 3 canh cua 1 tam giac");
	}
}
