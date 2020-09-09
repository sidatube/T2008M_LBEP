#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a =");
	scanf("%d",&a);
	printf("nhap b =");
	scanf("%d",&b);
	printf("nhap c =");
	scanf("%d",&c);
	
	if(a<=b){
		//ve 1
		if(a<=c){
			printf("min: %d",a);
		}else{
			printf("min: %d",c);
		}
	}else{
		//ve 2
		if(b<=c){
			printf("min: %d",b);
			
		}else{
			printf("min: %d",c);
		}
	}
}
