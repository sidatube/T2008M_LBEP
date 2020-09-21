#include <stdio.h>
#include <cmath>
int main(){
	int a,b,z=0;
	printf("Nhap 2 so a,b:");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if((a%i)==0&&(b%i)==0){
			z=i;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,z);
}
