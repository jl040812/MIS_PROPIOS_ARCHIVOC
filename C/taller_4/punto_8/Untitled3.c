#include<stdio.h>//suma negativos
int main(){
	char revisar;
	int resta, numero;
	do{
		resta=0;
		printf("digite 10 numeros (0 para terminar):\n");
		do{
			scanf (" %d", &numero);
			if (numero<0){
				resta=resta+numero;
			}
			else{
				resta=resta;
			}
		}while( numero<0|| numero>0 );
		printf("El total de los negativos es: %d\n", resta);
		printf(" quieres revisar otros numeros: s/n\n");
		scanf(" %c", &revisar);
	}while(revisar =='s'|| revisar =='S');
}