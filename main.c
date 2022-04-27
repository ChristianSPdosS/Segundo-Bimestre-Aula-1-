/*
  #include <stdio.h>
2
3 void linha3x ()
4 {
5 int i;
6 for(i = 1; i <= 3; i++)
7 printf("*");
8
9 printf("\n");
10 }
11
12 void linha5x ()
13 {
14 int i;
15 for(i = 1; i <= 5; i++)
16 printf("*");
17
18 printf("\n");
19 }
20
21 void linha7x ()
22 {
23 int i;
24 for(i = 1; i <= 7; i++)
25 printf("*");
26
27 printf("\n");
28 }
29
30 int main()
31 {
32 linha3x ();
33 linha5x ();
34 linha7x ();
35 linha5x ();
36 linha3x ();
37
38 return 0;
*/

/*
#include <stdio.h>
2
3 void linha(int num)
4 {
5 int i;
6 for(i = 1; i <= num; i++)
7 printf("*");
8
9 printf("\n");
10 }
11
12 int main()
13 {
14 linha (3);
15 linha (5);
16 linha (7);
17 linha (5);
18 linha (3);
19
20 return 0;
21 }
*/

/*
#include <stdio.h>
2
3 void linha(int num , char ch)
4 {
5 int i;
6 for(i = 1; i <= num; i++)
7 printf("%c", ch);
8
9 printf("\n");
10 }
11
12 int main()
13 {
14 linha(3, ’+’);
15 linha(5, ’+’);
16 linha(7, ’-’);
17 linha(5, ’*’);
18 linha(3, ’*’);
19
20 return 0;
21 }
*/


/*
#include <stdio.h>

 // Devolve a soma de dois inteiros 
 int soma(int a, int b)
 {
 return a+b;
 }

 // Devolve o dobro de qualquer inteiro 
 int dobro(int x)
 {
 return 2*x;
 }

 int main()
 {
 int n, i, total;
 printf("introduza dois números: ");
 scanf("%d%d", &n, &i);
 total = soma(n, i); // atrib. do result. de função a uma var.
 printf("%d+%d=%d\n", n, i, total);
 printf("2*%d=%d e 2*%d=%d\n", n, dobro(n), i, dobro(i));

 return 0;
 }
*/

/*
#include <stdio.h>

 int i = 5; // global

 void f1()
{
 i = 2; // altera -se a variável global
 printf("f1 :: global: %d\n", i);
 int i = 3; // cria-se uma nova variável local
 printf("f1 :: local: %d\n", i);
 }


 void f2()
 {
 printf("f2 :: global: %d\n", i);
 }

 int main()
 {
 printf("main :: global: %d\n", i);
 i = 3; // altera -se a variável global
 char i = ’c’; // local e global para próximo bloco de instruções
 printf("main :: local: %c\n", i);

 { // novo escopo de vida
 printf("main :: bloco :: global: %c\n", i);
 int i = 4; // local

 printf("main :: bloco :: local: %d\n", i);
 } // fim do escopo de vida da variável int i (4)
 printf("main :: local: %c\n", i);
 f2();
 f1();
 f2();

 return 0;
 }
*/

/*
  #include <stdio.h>
2 void f1()
3 {
4 printf("f1\n");
5 f2();
6 }
7 void f2()
8 {
9 printf("f2\n");
10 }
11 int main()
12 {
13 f1();
14 return 0;
15 }
*/




  
 