#include <stdio.h>
#include <cmath>

//int main(){
//	int A,a,b,c,d,x;
//	printf("Nhap so A:");
//	scanf("%d",&A);
//	if(A>0&&A<=9){
//		printf("So nghich dao cua A la: %d",A);
//	}else{
//		if(A>=10&&A<=99){
//			a=A/10;
//			b=A%10;
//			x=10*b+a;
//			printf("So nghich dao cua A la: %d",x);
//		}else{
//			if(A>=100&&A<=999){
//				a=A/100;
//				b=(A/10)%10;
//				c=A%10;
//				x=100*c+10*b+a;
//				printf("So nghich dao cua A la: %d",x);
//			}else{
//				if(A>=1000&&A<=9999){
//					a=A/1000;
//					d=A%10;
//					c=(A/10)%10;
//					b=A/100%10;
//					x=1000*d+100*c+10*b+a;
//					printf("So nghich dao cua A la: %d",x);
//				}else{
//					printf("Hay nhap 1 so tu 1 - 9999");
//				}
//			}
//		}
//	}
	//cach khac
int main(){
	int A,B=0;
	printf("nhap A=");
	scanf("%d",&A);
	if(A>0&&A<10000){
		B=B*10 + A%10;
		A/=10;
		if(A!=0){
			B=B*10 + A%10;
			A/=10;
		}
		if(A!=0){
			B=B*10 + A%10;
			A/=10;
		}
		if(A!=0){
			B=B*10 + A%10;
			A/=10;
		}
		printf("Ngich dao: %d",B);
	}
}
