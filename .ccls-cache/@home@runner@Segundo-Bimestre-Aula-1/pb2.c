#include <stdio.h>

char c;
void linha(int n)
{
  int i;
for( i = 1; i <= n; i++)
  printf("%c" , c);
  printf("\n");
  }



int main(){

  printf("Digite um caractere: \n" , c);
  scanf("%c" , &c);

linha(3);
  linha(5);
  linha(10);
  linha(5);
  linha(3);
  




















  
  return 0;
}