#include<stdio.h>
int main(){
	int number,i,tich;
	printf("moi ban nhap 1 so nguyen duong");
	scanf("%d",&number);
	for(i = 1;i<=10;i++){
		tich = number * i;
		printf("%d * %d = %d\n",number,i,tich);
	}
	
	return 0;
	
}
