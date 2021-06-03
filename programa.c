#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNOS 50;
typedef struct
{
    char nome[50];
    int notas[4];
    int ativo;
} Aluno;

Aluno alunos[MAX_ALUNOS];
void menu();
void cadastrar();
void remover();
void reprovados();
void pesquisar();
int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
void menu()
{
    system("clear"); //linux
    //system("cls"); //windows
    int op;
    do
    {
        printf("\n1 - Cadastrar aluno\n2 - Remover aluno");
        printf("\n3 - Alunos reprovados\n4 - Pesquisar aluno\n");
        printf("\n0 - Sair\n");
        scanf("%d", &op);
    } while (op != 0);
}
void cadastrar()
{
}
void remover()
{
}
void reprovados()
{
}
void pesquisar()
{
}
