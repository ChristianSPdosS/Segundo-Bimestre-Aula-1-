/*
  Escreva um programa que solicite dois números ao usuário e apresente na tela o resultado da sua
soma e o dobro de cada um deles.
  */

#include <stdio.h>


void linha(int i, int n)
{
  printf("Digite um numero:\n");
  scanf("%d" , &i);
  printf("digite outro numero:\n");
  scanf("%d" , &n);
  printf("%d\n%d\n%d\n" , i + n, i * 2, n * 2);
  
  }



int main(){

  

linha(0 , 0);

  return 0;
  }