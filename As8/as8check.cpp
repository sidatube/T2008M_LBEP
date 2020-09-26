#include <stdio.h>
#include "as8h.h"
#include <cmath>
int main(){
	printf("Tim so nguyen to tiep theo cua n.\n");
	int n1;
	printf("Nhap n:");
	scanf("%d",&n1);
	sntkt(n1);
	printf("\nKet thuc tim so nguyen to tiep theo cua n.");
//	het bai 1
	printf("\nTinh tong cac chu so cua 1 so nguyen. ");
	int n2;
	printf("Nhap n:");
	scanf("%d",&n2);
	tcs(n2);
	printf("\nKet thuc tong cac chu so cua 1 so nguyen.");
//	het bai 2
	printf("\nTinh chu vi tam giac.");
	int a1,b1,c1;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d",&a1,&b1,&c1);
	chuvi(a1,b1,c1);
	printf("\nKet thuc tinh chu vi tam giac.");
	//het bai 3.
	printf("\nTinh dien tich tam giac.");
	int a2,b2,c2;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d",&a2,&b2,&c2);
	dientich(a2,b2,c2);
	printf("\nKet thuc tinh dien tich tam giac.");
	//het bai 4
	printf("\nTim uoc chung lon nhat cua 2 so.");
	int x1,x2;
	printf("Nhap 2 so:");
	scanf("%d%d",&x1,&x2);
	ucln(x1,x2);
	printf("\nKet thuc tim uoc chung lon nhat.");
	//het bai 5.
	printf("\nTim boi chung nho nhat cua 2 so.");
	int y1,y2;
	printf("Nhap 2 so:");
	scanf("%d%d",&y1,&y2);
	bcnn(y1,y2);
	printf("\nKet thuc tim boi chung nho nhat cua 2 so.");
	
}
