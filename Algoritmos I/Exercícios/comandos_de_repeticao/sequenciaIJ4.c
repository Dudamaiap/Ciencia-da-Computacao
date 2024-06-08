/*Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?*/

#include <stdio.h>

int main() {
  float i,j; 
  for (i = 0; i <= 2.0; i=i+0.2) {
    for (j = 1; j <= 3; j++){
      if ((i==0)||(i==1)||(i==2)){
        printf("I=%.0f J=%.0f\n", i, j+i);
      }
      else{
        printf("I=%.1f J=%.1f\n", i, j+i);
      }
   }
  }
  for (int i=1; i<=3; i++)
   printf("I=%d J=%d\n", 2, 2+i);
  return 0;
}
