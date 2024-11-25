#include<stdio.h>
int main(){
	int n;
	while(1){
		printf("moi nhap n");
		scanf("%d",&n);
		if(n==20){
			goto end;
		}
		else{
			printf("nhap lai n\n");
		}
	}
	end:
	return 0;
	
}
