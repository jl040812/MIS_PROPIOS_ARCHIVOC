#include<stdio.h>

int main(){
	int numero, a, b, c;
	char revisar;
	do{
		printf("Digite un numero\n");
		scanf(" %d", &numero);
		if(numero>0){
			a=0;
			b=1;
			printf(" %d \n %d \n", a, b);
			for(int i=1; i<numero; i++){
				c=a+b;
				a=b;
				b=c;
				printf(" %d \n", c);
			}
		}
		else{
			printf("no se puede generar la serie fibonachi");
		}
		printf("quieres revisar otra serie: s/n\n");
		scanf(" %c", &revisar);
	}while(revisar=='s');
}