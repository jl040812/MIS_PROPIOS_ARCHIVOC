#include<stdio.h>

int main(){
	int a, b, c;
	char revisar;
	do{
		printf("Digite 3 numeros\n");
		scanf(" %d %d %d", &a, &b, &c);
		if (((a+b==c)||(a+c==b))||(a+c==a)){
			printf(" Dos de los numeros ingresados dan igual al tercero faltante\n");
		}
		else {
			printf (" De los numeros ingresados ninguno es igual al tercero\n");
		}
		printf ("quieres revisar otros numeros: s/n \n");
		scanf (" %c", &revisar);
	}while( revisar == 's'|| revisar =='s');
}