#include <stdio.h>
int main (){
	
	int ar[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("Nhap ar[%d][%d]: ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Ma tran ban dau la:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("\t%d",ar[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran chuyen vi la:\n");
	int ary[3][2];
	for(int j=0;j<3;j++){
		for(int i=0;i<2;i++){
			ary[j][i]=ar[i][j];
			printf("\t%d",ary[j][i]);
		}
		printf("\n");
	}
}
