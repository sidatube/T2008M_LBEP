void snt(int n){
	bool f=false;
	if(n<=1){
		printf("Khong co so nguyen nho hon 2");
	
	}else if(n>=3){	
		
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				f=true;
				break;
			}	
		}
		if(!f){
			printf("%d la so nguyen to",n);
		}else{
			printf("%d khong phai la so nguyen to",n);
		}
	
	}else if(n==2){
		printf("2 la so nguyen to");

	}
	printf("\nXong phan so nguyen to.");
	return ;

}
void snd(int n){
	int s=0;
	while(n!=0){
		s=s*10+n%10;
		n/=10;
	}
	printf("So nghich dao la: %d",s);
	printf("\nXong phan so nghich dao.");
	return;
}
