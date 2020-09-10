#include <stdio.h>
int main (){
	int x;
	printf("nhap x:");
	scanf("%d",&x);
	if(x>=2&&x<=7){
		printf("hom nay la thu %d",x);
	}else{
		if(x==8){
			printf("hom nay la chu nhat");
		}else{
			printf("day khong phai 1 ngay trong tuan");
		}
	}
}
