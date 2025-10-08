#include<stdio.h>
int main(){
	int i=1, a=0;
	char sacar;
	
	do{	
		a=a+20;
		for(i; i<=a; i++){
			printf(" %d \n", i);
		}
		if (i>1000){
			return 0;
		}
		printf("Quieres sacar los otros 20 numeros: s/n \n");
		scanf(" %c", &sacar);
	}while( sacar == 's'|| sacar == 'S');
	
}