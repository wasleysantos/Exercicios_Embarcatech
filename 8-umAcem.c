/******************************************************************************  
 * Nome do Arquivo: umAcem.c  
 * Autor: Wasley dos Santos 
 * Descrição: Escreva um programa que exiba todos os números de 1 a 100, exceto os múltiplos de 3.
 ******************************************************************************/ 

#include <stdio.h>  

int main() {  
    
    for (int i = 1; i <= 100; i++) {  
         
        if (i % 3 != 0) {  
            printf("%d\n", i);  
        }  
    }  
    
    return 0;  
}