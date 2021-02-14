#include <stdio.h>

/*
2 - Escreva um programa que receba dados via teclado para variaveis do tipo short, long, int, float, double e um char e imprima-os no video no seguinte formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/

short s;
float f;
long  l;
double df;
int i;
char c;


int main() {

printf("Digite um número inteiro/curto: ");
scanf("%hd", &s);
printf("\nDigite um número inteiro/longo: ");
scanf("%ld", &l);
printf("\nDigite um número inteiro: ");
scanf("%d", &i);
printf("\nDigite um número flutuante: ");
scanf("%f", &f);
printf("\nDigite um número flutuante/longo: ");
scanf("%lf", &df);
printf("\nDigite um caracter: ");
scanf(" %s", &c);

printf("\n\n");

  printf("\t\t10\t\t  20\t\t30\t\t  40\t\t50\t\t  60\t\t\n");
  printf("12345678901234567890123456789012345678901234567890123456789012345\n");
  printf("\t%hd\t\t\t\t\t%ld\t\t\t\t\t%d\n", s, l, i);
  printf("\t\t\t  %.3f\t\t  %.4f\t\t  %c", f, df, c);
}
