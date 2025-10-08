#include<stdio.h>

int main(){
    int A, B, C, medio;
    char revisar;
    do{
        printf("Digite tres numeros\n");
        scanf(" %d %d %d", &A, &B, &C);
        medio=A;
        if (((A <B) && ( A > C)) || (A>B)&&(A<C)){
            medio=A;
        }
        if(((B<A) && (B>C)) || ((B>A)&& (B<C))){
            medio=B;
        }
        if (((C<A)&&(C>B))||((C>A)&&(C<B))){
            medio=C;
        }
        printf("su numero del centro es: %d \n", medio);
        printf("Quiere revisar otros numeros: s/n \n");
        scanf(" %c", &revisar);
    }while( revisar =='s'||revisar == 'S');
}