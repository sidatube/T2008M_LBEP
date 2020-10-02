#include <stdio.h>
#include <cmath>

int main(){
	int c;
	float a,b,d;
	printf("Nhap so tien gui: ");
	scanf("%f",&a);
	printf("Nhap so tien lai hang nam: ");
	scanf("%f",&b);
	printf("Nhap nam gui: ");
	scanf("%d",&c);
	for(int i=1;i<=c;i++){
		d=a*b/100;
		a+=d;
		printf("Nam: \t	Lai: \t\t Von: \n");
		printf("%d\t\t%f\t %f \n",c,d,a);
	}
}
