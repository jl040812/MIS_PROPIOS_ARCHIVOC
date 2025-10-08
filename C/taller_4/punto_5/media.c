#include<stdio.h>
int main(){
    float resultado;
    int suma, media, lista;
    char sacar;
    do{
    	suma=0;
    	media=0;
    	resultado=0;
    	printf("Digita numeros para sacar promedios(un 0 para terminar)\n");
    	do{
    		scanf(" %d", &lista);
    		if(lista>0){
				suma=suma+lista;
    			media++;
    		}
		}while(lista>0);
		resultado = (float)suma/media;
		printf("su media es %f \n", resultado);
		printf("quiere sacar otro promdeio? s/n \n");
		scanf(" %c", &sacar);
    }while(sacar == 's' || sacar=='S');
}
