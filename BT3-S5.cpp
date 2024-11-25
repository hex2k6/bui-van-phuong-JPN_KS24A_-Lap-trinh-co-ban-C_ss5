#include<stdio.h>
int main(){
	int n,tong;
	printf("moi ban nhap 1 so nguyen duong");
	scanf("%d",&n);
	for(n;n>=1;n--){
		tong +=n;
	}
	printf("tong cua day la %d",tong);
	
	return 0;
}
