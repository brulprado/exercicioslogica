#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    //Capítulo: Estrutura condicional Exercício 01
    // Problema "notas"
    // Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
    // uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
    // ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
    // mensagem "REPROVADO"

float nota = 60.0;
float nota1, nota2, media;
printf("Digite a primeira nota: ");
scanf("%f", &nota1);
printf("Digite a segunda nota: ");
scanf("%f", &nota2);
media = (nota1 + nota2) / 2;

    if(media >= nota){
        printf("A nota final do aluno foi: %.1f\n", media);
    printf("APROVADO\n");
    }
    else{
        printf("A nota final do aluno foi: %.1f\n", media);
        printf("REPROVADO\n");
    }
    return 0;
    // Fim do programa

}