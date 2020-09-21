#include <stdio.h>
int main(){
	int n,i,j,dem=0;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n<2){
		printf("Khong co so nguyen to nho hon 2");
	}else{
		for (i=2;i<=n;i++){
            for (j=2;j<=i;j++){
                if(i%j==0){
                    dem++;
                }
            }
            if(dem==1){
                printf("\t%d\n",i);
            }
            dem=0;
        }
	}
}
