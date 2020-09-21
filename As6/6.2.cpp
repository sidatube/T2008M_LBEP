#include <stdio.h>
int main (){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int ary[n];
	for( int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int z=0;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			z+=ary[i];
		}
	}
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			if(ary[i]<z){
				z=ary[i];
			}
		}
	}
	printf("So duong be nhat la: %d",z);
}
