#include <stdio.h>
int main (){
	int a,b;
	printf("nhap 2 so a,b:");
	scanf("%d%d",&a,&b);
	if(a>=b){
		printf("thuong 2 so la:%f",(float)a/(float)b);
	}else{
		printf("tich 2 so la:%d",a*b);
	}
}
