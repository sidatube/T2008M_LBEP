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
	int z=0,count=0;
	for(int i=0;i<n;i++){
		if(!(ary[i]%2==0)&&i%2==0){
			printf("%d\t",ary[i]);
			z+=ary[i];
			count++;
		}
	}
	if(count>0)
		printf("\nTrung binh cong so le la:%0.2f",((float)z/count));
	else
		printf("Khong co so le o vi tri chan hoac khong co so le");
}
