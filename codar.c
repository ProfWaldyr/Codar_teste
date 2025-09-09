#include <stdio.h>


int main(){
    int idade;
    float altura;
    char nome[50];
    int matricula;


    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%.2f", &altura);

    printf("digite seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua matricula: \n");
    scanf"%d", &matricula);

    printf("Matricula: %d \n", matricula);
    printf("Nome do aluno: %s \n", nome);
    printf("Idade do aluno: %d \n", idade);
    prinf("Altura do aluno: %f \n", altura);

    return 0;

}
