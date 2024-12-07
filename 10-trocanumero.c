/******************************************************************************  
 * Nome do Arquivo: trocanumero.c  
 * Autor: Wasley dos Santos 
 * Descrição: Escreva um programa que leia dois números inteiros e troque seus valores sem usar
variáveis auxiliares.
 ******************************************************************************/ 


#include <stdio.h>  

int main() {  
    int num1, num2;  

     
    printf("Digite o primeiro numero inteiro\n");  
    scanf("%d", &num1);  
    printf("Digite o segundo numero inteiro\n");  
    scanf("%d", &num2);  
    
   
    printf("Antes da troca: \nnumero 1= %d \nnumero2 = %d\n", num1, num2);  

     
    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 

    printf("Depois da troca:\nnumero 1 = %d\nnumero 2 = %d\n", num1, num2);  

    return 0;  
}