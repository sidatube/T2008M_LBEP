#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(!n>0);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int z;
	for(int i=0;i<n;i++){
		if(ary[i]%2 != 0){
			z=ary[i];
		}
	}
	printf("So le cuoi cung la %d",z);
}
