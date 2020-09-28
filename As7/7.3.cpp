#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		int x;
		bool flag;
	
		do{
			flag =false;
			printf("Nhap ar[%d]: ",i);
			scanf("%d",&x);
			for(int j=0;j<i;j++){
				if(ar[j]==x){
					flag =true;
					break;
				}
			}
			if(flag ==false){
				ar[i]=x;
			}
			
		}while(flag);
	}
	printf("Mang da nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ar[i]);
	}
}
