/******************************************************************************  
 * Nome do Arquivo: parImpar.c  
 * Autor: Wasley dos Santos 
 * Descrição: Crie um programa que leia um número inteiro e determine se ele é par ou ímpar.
 ******************************************************************************/ 

#include <stdio.h>  

int main() {  
    int numero;  

   
    printf("Digite um número inteiro: ");  
    scanf("%d", &numero);  
 
    if (numero % 2 == 0) {  
        printf("O número %d eh par.\n", numero);  
    } else {  
        printf("O número %d eh ímpar.\n", numero);  
    }  

    return 0;  
}