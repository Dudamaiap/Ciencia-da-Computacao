/*Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13*/

#include <stdio.h>
 
int main(void) {
 
    int i,j,z=0;
    
    for(i=1; i<=9; i=i+2){
        for(j=7+z; j>=5+z; j--){
            printf("I=%i J=%i\n",i,j);
        }
        z=z+2;
    }
    return 0;
}