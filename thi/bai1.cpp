#include <stdio.h>
int main (){
	printf("Cac so trong day Fibonacci tu 1 den 100 la:\n");
	int i=0,j=1,k=1;
	while(j+k<=100){		
		i=j;	//i = j (old)
		j=k;	//j = k (old)
		k=i+j;	//k = i + j (new)
		printf("%d\t ",k);	
	}
}
