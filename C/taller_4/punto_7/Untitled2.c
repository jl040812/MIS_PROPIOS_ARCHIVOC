#include<stdio.h>
int main(){
	int i, resultado_total, resultado_cuadradro;
	i=1;
	resultado_total =0;
	resultado_cuadradro =0;
	while(i<=100){
		resultado_cuadradro=i*i;
		resultado_total=resultado_total+resultado_cuadradro;
		i++;
	}
	printf("resultado de los 100 primeros positivos numeros enteros al cuadrado desde 1: %d", resultado_total);
}