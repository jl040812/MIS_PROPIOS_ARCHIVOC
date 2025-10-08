#include<stdio.h>//suma negativos
int main(){
	char revisar;
	int resta, numero, C1;
	do{
		C1=0;
		resta=0;
		printf("digite 10 numeros :\n");
		do{
			scanf (" %d", &numero);
			if (numero<0){
				resta=resta+numero;
				C1++;
			}
			else {
				C1++;
			}

		}while(C1<=10);

		printf("El total de los negativos es: %d\n", resta);
		
		printf(" quieres revisar otros numeros: s/n\n");
		scanf(" %c", &revisar);
	}while(revisar =='s'|| revisar =='S');
}
