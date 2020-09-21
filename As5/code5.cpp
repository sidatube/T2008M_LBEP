#include <stdio.h>
int main(){
	int a,b,i,j,dem=0;
	printf("Nhap a,b:");
	scanf("%d%d",&a,&b);
	if(b<2){
		printf("Khong co so nguyen to nho hon 2");
	}else{
		for (i=a;i<=b;i++){
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
