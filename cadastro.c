#include <stdio.h>;
#include <string.h>;

int main() {
    char nome[50];
    int idade;
    int opcao;

    printf("=====================================\n");
    printf("SISTEMA DE CADASTRO DE USUARIO\n");
    printf("=====================================\n");

    printf("Escolha uma opcao:\n");
    printf("1 - Realizar cadastro\n");
    printf("2 - Sair\n");
    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 2) {
        printf("\nEncerrando o sistema. Ate logo!\n");
        return 0;
    }

    if (opcao != 1) {
        printf("\nOpcao invalida. Reinicie o programa e tente novamente.\n");
        return 1;
    }

    printf("\n--- Cadastro ---\n");

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o \n do final, se existir
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (strlen(nome) == 0) {
        printf("\nErro: O nome nao pode ficar vazio.\n");
        return 1;
    }

    if (idade < 0 || idade > 120) {
        printf("\nErro: Idade invalida. Digite um valor entre 0 e 120.\n");
        return 1;
    }

    printf("\nCadastro realizado com sucesso!\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);

    printf("\nObrigado por usar o sistema.\n");
}