/******************************************************************************  
 * Nome do Arquivo: maior&Menor.c  
 * Autor: Wasley dos Santos 
 * Descrição: Escreva um programa que leia dois números e mostre o maior entre eles.
 ******************************************************************************/ 

#include <stdio.h>  

int main() {  
    int i, numero, maior, menor=0;

    for (i = 0; i < 2; i++)
    {
      printf("informe o valor de %d \n", i+1);
      scanf("%d", &numero);

      if (i==0){
        maior=numero;
        menor=numero;
      }

      if (numero > maior){
        maior=numero;
      }
      if (numero<menor){
        menor=numero;
      }
    }
    printf("O maior numero %d e o menor %d", maior, menor);
    return 0;  
} 