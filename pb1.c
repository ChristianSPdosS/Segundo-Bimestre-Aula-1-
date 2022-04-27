/* Escreva um programa que, recorrendo a três funções distintas, escreva na tela a seguinte saída:
***
*****
*******
*****
***
*/

#include <stdio.h>

void f1(){
  int i;
  for (i=1; i <= 3; i++ )
    printf("*");
  printf("\n");
}

void f2() {
int i;
  for(i =1; i <= 4; i++)
    printf("*");
  printf("\n");
}

void f3() {
int i;
  for(i =1; i <= 5; i++)
    printf("*");
  printf("\n");
}

int main(){
  f1();
  f2();
  f3();
  f2();
  f1();
}
