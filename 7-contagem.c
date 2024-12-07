/******************************************************************************  
 * Nome do Arquivo: contagem.c  
 * Autor: Wasley dos Santos 
 * Descrição: Crie um programa que leia números inteiros até que o usuário digite zero. O
programa deve contar quantos números foram digitados (excluindo o zero).
 ******************************************************************************/ 

#include <stdio.h>  

int main() {  
    int numero;  
    int i = 0;  
    
    while (1) {  
        printf("Digite um numero inteiro (0 para sair): \n");  
        scanf("%d", &numero);  
         
        if (numero == 0) {  
            break;  
        }  
        
        i++;  
    }  

    printf("Voce digitou %d numeros.\n", i);  

    return 0;  
}