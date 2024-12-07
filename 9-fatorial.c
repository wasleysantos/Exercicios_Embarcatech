/******************************************************************************  
 * Nome do Arquivo: fatorial.c  
 * Autor: Wasley dos Santos 
 * Descrição: Crie um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.
 ******************************************************************************/ 


#include <stdio.h>  

int main() {  
    int numero;  
    unsigned long long fatorial = 1; 

    
    printf("Digite um numero inteiro para saber o fatorial:");  
    scanf("%d", &numero);  

     
    if (numero < 0) {  
        printf("Numero invalido(não permitido numeros negativos)\n");  
    } else {  
         
        for (int i = 1; i <= numero; i++) {  
            fatorial *= i; 
        }  
       
        printf("O fatorial de %d eh %llu.\n", numero, fatorial);  
    }  
    
    return 0;  
}