/******************************************************************************  
 * Nome do Arquivo: parImpar.c  
 * Autor: Wasley dos Santos 
 * Descrição: Escreva um programa que leia um número e exiba sua tabuada de 1 a 10.
 ******************************************************************************/ 

#include <stdio.h>  

int main() {  
    int numero; 
     
    printf("tabuada de 1 a 10");  
    printf("Digite um numero para saber a sua tabuada \n");  
    scanf("%d", &numero);  
 
    for (int i = 1; i <= 10; i++)
    {
      printf("%d X %d : %d \n", numero, i, numero*i);
    }
    
    return 0;  

}
