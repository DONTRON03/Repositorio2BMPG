#include <stdio.h>
int main(){
	int n1,n2,n3;
	printf("ingresa 3 numeros \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	// 123,321,213,312,231,132,
	if (n1>n2){
		if (n2>n3){
			printf("menor al mayor: %d %d %d",n3,n2,n1);
		}
	}
	if (n2>n1){
		if (n1>n3){
			printf("menor al mayor: %d %d %d",n3,n1,n2);}
	}
	if (n3>n1){
		if (n1>n2){
			printf("menor al mayor: %d %d %d",n2,n1,n3);}
	}
	if (n1>n3){
		if (n3>n2){
			printf("menor al mayor: %d %d %d",n2,n3,n1);}
	}
	if (n2>n3){
		if (n3>n1){
			printf("menor al mayor: %d %d %d",n1,n3,n2);}
	}
	if (n3>n2){
		if (n2>n1){
			printf("menor al mayor: %d %d %d",n1,n2,n3);}
	}
return 0;
}
