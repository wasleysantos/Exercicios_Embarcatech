/******************************************************************************  
 * Nome do Arquivo: media.c  
 * Autor: Wasley dos Santos 
 * Descrição: Crie um programa que leia três notas de um aluno e calcule a média aritmética.
 ******************************************************************************/ 

#include <stdio.h>  

int main() {  
    float nota1, nota2, nota3, media; 
     
    printf("Media das notas do aluno");

    printf("Digite a primeira nota \n");  
    scanf("%f", &nota1);  
    printf("Digite a segunda nota \n");  
    scanf("%f", &nota2);  
    printf("Digite a terceira nota \n");  
    scanf("%f", &nota3);  
    media=(nota1+nota2+nota3)/3;

    printf("A sua media eh: %.1f", media);

}