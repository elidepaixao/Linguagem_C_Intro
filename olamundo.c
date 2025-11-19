#include <stdio.h>

//declarando variaveis

int main () {
    int idade, matricula;
    float altura;
    char nome [50];

    printf("Digite sua matricula: \n");
    scanf("%i", &matricula);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
        
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Nome do aluno: %s - Matricula: %d ", nome, matricula);
    printf("Idade: %d - altura: %f", idade, altura);

    return 0;


}


    /* especificador de formato:
    %d: decimal;
    %i: inteiro;
    %f: flutuante;
    %c: caractere;
    %s: string.
    */


