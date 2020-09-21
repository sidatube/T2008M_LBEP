#include <stdio.h>
int main(){
	int n,z;
	do{
		printf("Nhap so tu nhien n:");
		scanf("%d",&n);
	}while(n<0);
	//tim uoc
	if(n==0){
		printf("Uoc cua 0 la 1.\nTong uoc la 1.");
	}else{
		for(int i=1;i<=n;i++){			
			if((n%i)==0){
			z+=i;
			printf("Uoc cua %d la %d\n",n,i);
			}
		}
		printf("Tong uoc cua %d la: %d",n,z);
	}
}


