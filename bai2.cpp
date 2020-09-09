#include <stdio.h>
#include <cmath>
int main(){
	int a,b,c,d;
	printf("tim x biet ax^2+bx+c=0 ");
	printf("nhap a,b,c =");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		//1
		if(b==0){
			//2
			if(c==0){
				//3
				printf("Phuong trinh co vo so nghiem");
				
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			printf("Phuong trinh co nghiem la: %d",-c/b);
			
		}
	}else{
		d=b*b-4*a*c;
		
		if(d>=0){
			if(d==0){
				printf("Phuong trinh co nghiem kep la: %d",-b/(2*a));
				
			}else{
				int x1,x2;
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet la");
				printf("x1=%d",x1);
				printf("x2=%d",x2);
			}
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
}
