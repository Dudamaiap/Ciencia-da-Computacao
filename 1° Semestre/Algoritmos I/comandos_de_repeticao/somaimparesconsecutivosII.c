/*Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.*/
#include <stdio.h>
 
int main(void) {
 
    int n,x,y,soma,i,aux;
    
    scanf("%i",&n);
    
    while(1){
        if(n==0) break;
        
        soma=0;
        scanf("%i %i", &x, &y);
        if(x>y){
            aux=x;
            x=y;
            y=aux;
        }
        for(i=x+1; i<y; i++){
            if(i%2!=0){
                soma += i;
            }
        }
        printf("%i\n", soma);
        n--;
    }
 
    return 0;
}