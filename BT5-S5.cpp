#include<stdio.h>
int main(){
	int number,i,tich;
	for(number =1;number<10;number++){
		for(i =1;i<=10;i++){
			tich = number * i;
			printf("%d * %d = %d\n",number,i,tich);
		}
	}
	
}
