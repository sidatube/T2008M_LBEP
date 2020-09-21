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
	int max=0,count=0;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			count++;
			if(max<count){
				max=count;
			}
		}else{
			count=0;
		}
	}
	printf("So luong cac so duong lien tiep la: %d",max);
}
