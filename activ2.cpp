#include <stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Ingresa 5 numeros enteros");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	
	if (a<b){
		if (a<c){
			if (a<d){
				if(a<e){
					printf("%d es menor",a);
				}
			}
		}
	}
		if (b<a){
		if (b<c){
			if (b<d){
				if(b<e){
					printf("%d es menor",b);
				}
			}
		}
	}
		if (c<a){
		if (c<b){
			if (c<d){
				if(c<e){
					printf("%d es menor",c);
				}
			}
		}
	}
		if (d<a){
		if (d<b){
			if (d<c){
				if(d<e){
					printf("%d es menor",d);
				}
			}
		}
	}	if (e<a){
		if (e<b){
			if (e<c){
				if(e<d){
					printf("%d es menor",e);
				}
			}
		}
	}
}
