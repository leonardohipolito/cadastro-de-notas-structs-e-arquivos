#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNOS 50;
typedef struct
{
    char nome[50];
    float notas[4];
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
    int op;
    do
    {
        system("clear"); //linux
        //system("cls"); //windows
        printf("\n1 - Cadastrar aluno\n2 - Remover aluno");
        printf("\n3 - Alunos reprovados\n4 - Pesquisar aluno\n");
        printf("\n0 - Sair\n");
        scanf("%d", &op);
        getchar();
        switch (op)
        {
        case 1:
            cadastrar();
            break;
        }
    } while (op != 0);
}
void cadastrar()
{
    system("clear"); //linux
    //system("cls"); //windows
    char nome[50];
    float notas[4];
    int op;
    do
    {
        printf("\nNome: ");
        fgets(nome, sizeof(nome), stdin);
        printf("\n1 Bimestre:");
        scanf("%f", notas[0]);
        printf("\n2 Bimestre:");
        scanf("%f", notas[1]);
        printf("\n3 Bimestre:");
        scanf("%f", notas[2]);
        printf("\n4 Bimestre:");
        scanf("%f", notas[3]);
        for (int i = 0; i < MAX_ALUNOS; i++)
        {
            if (alunos[i].ativo == 0)
            {
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome);
                break;
            }
        }

        printf("\n1 - Continuar\n0 - Sair");
        scanf("%d", &op);
    } while (op != 0);
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
