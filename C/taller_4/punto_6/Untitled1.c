#include<stdio.h>
int main(){
	float resultado_par=0, resultado_imp=0;
	int suma_par=0, suma_imp=0, media_imp=0, media_par=0, i;
	i=1;
	while(i<=200){
		if ((i%2)==0){
			suma_par= suma_par+i;
			media_par++;
			i++;
		}
		else {
			suma_imp=suma_imp+i;
			media_imp++;
			i++;
		}
	}
	resultado_par=suma_par/media_par;
	resultado_imp=suma_imp/media_imp;
	printf("La media de los pares es: %f\n", resultado_par);
	printf("La media de los impares es: %f\n", resultado_imp);
}