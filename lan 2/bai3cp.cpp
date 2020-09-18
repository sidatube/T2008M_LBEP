#include <stdio.h>
#include <cmath>
int main(){
	int thang, ngay, thu, days,x;
	printf("nhap thang va ngay la:");
	scanf("%d%d",&thang,&ngay);	
	if((
	(thang==1)||
	(thang==3)||
	(thang==5)||
	(thang==7)||
	(thang==8)||
	(thang==10)||
	(thang==12))
	&&ngay>=1
	&&ngay<=31||	
	((thang==4)||
	(thang==6)||	
	(thang==9)||
	(thang==11)
	&&ngay>=1
	&&ngay<=30)||		
	(thang==2&&ngay>=1&&ngay<=28)
	&&thang>=1&&thang<=12){
		if(thang==2){
		days= 31 +ngay;
    	}else{
	    	if(thang<=7){
		    	if(
			        (thang==4)||
			        (thang==6)){
			        	days=31*thang/2+30*thang/2-32+ngay;
			 	   }else{
		        		if(thang==1){
			    		days=ngay;
			    		}else{
			    			days=(thang-1)/2*61-2+ngay;
							}
					}
			}else{
				if(
				    (thang==9)||
					(thang==11)){
						days=212+31*(thang-7)/2+((thang-7)/2-1)*30+ngay;
					}else{
						days=(thang-8)/2*61+212+ngay;
					}
				}
			}
			printf("\nhom do la ngay thu %d",days);			
			x=days%7;			
			if(x==0){
			printf("\nhom do la chu nhat");
			}else{
				printf("\nhom do la thu may chac chan la thu %d",x+1);
			}
	}else{
		printf("hay nhap lai cho den khi khong thay dong chu nay nua");
	}
}
