#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	int x,count=0;
	printf("Nhap x:");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(ary[i]==x){
			count++;
		}
	}
	if(count>=1){
		printf("%d co trong mang %d so nguyen",x,n);
	}else{
		printf("%d khong co trong mang %d so nguyen",x,n);
	}
}
