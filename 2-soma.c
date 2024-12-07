/******************************************************************************  
 * Nome do Arquivo: soma.c  
 * Autor: Wasley dos Santos 
 * Descrição: Escreva um programa que leia dois números inteiros do usuário e exiba a soma deles.
 ******************************************************************************/ 

#include <stdio.h>  

int main(){  
    
    int num1, num2, resultado;  

    printf("Calculadora de Soma\n");  
    printf("Digite o primeiro numero: \n");  
    scanf("%d", &num1);  
    printf("Digite o segundo numero: \n");  
    scanf("%d", &num2);  
    
    resultado = num1 + num2;  
    printf("O resultado da soma eh: %d \n", resultado);  

    return 0;  
}