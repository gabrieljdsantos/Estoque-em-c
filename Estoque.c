// inclusão de biblioteca básico da linguagem C
#include <stdio.h>

// função principal
int main() {
    // declaração de variáveis
    int codigoProduto1;
    // string
    char nomeProduto1[50];
    float precoProduto1;
    int quantidadeEstoque1;

    int codigoProduto2;
    char nomeProduto2[50];
    float precoProduto2;
    int quantidadeEstoque2;

    int codigoProduto3;
    char nomeProduto3[50];
    float precoProduto3;
    int quantidadeEstoque3;

    int codigoProduto4;
    char nomeProduto4[50];
    float precoProduto4;
    int quantidadeEstoque4;

    int codigoProduto5;
    char nomeProduto5[50];
    float precoProduto5;
    int quantidadeEstoque5;

    // declração de variáveis com valores, para evitar erros de incrementação
    float precoTotalEstoque = 0.0;
    int totalProdutosEstoque = 0;

    // inicío da interface no programa
    printf("==========================================\n");
    printf("          SISTEMA DE ESTOQUE\n");
    printf("==========================================\n");
    printf("\n");
    printf("-- Bem Vindo ao Sistema de Estoque --");
    printf("\n");
    printf("\n");
    
    printf("PRODUTO 1\n");
    printf("==========================================\n");

    printf("Digite o codigo do produto 1:");
    // ler a entrada do usuário
    scanf(" %i", &codigoProduto1);

    printf("Digite o nome do produto 1:");
    scanf(" %s", &nomeProduto1);

    printf("Digite o preco do produto 1: R$");
    scanf(" %f", &precoProduto1);

    printf("Digite a quantidade do produto 1:");
    scanf(" %i", &quantidadeEstoque1);
    
    precoTotalEstoque += quantidadeEstoque1 * precoProduto1;
    totalProdutosEstoque += quantidadeEstoque1;
    
    printf("Valor Total Produto %s: R$%.2f\n", nomeProduto1, quantidadeEstoque1 * precoProduto1);
    printf("==========================================\n");
    
    printf("\n");
    printf("PRODUTO 2\n");
    printf("==========================================\n");

    printf("Digite o codigo do produto 2:");
    scanf(" %i", &codigoProduto2);

    printf("Digite o nome do produto 2:");
    scanf(" %s", &nomeProduto2);

    printf("Digite o preco do produto 2: R$");
    scanf(" %f", &precoProduto2);

    printf("Digite a quantidade do produto 2:");
    scanf(" %i", &quantidadeEstoque2);

    precoTotalEstoque += quantidadeEstoque2 * precoProduto2;
    totalProdutosEstoque += quantidadeEstoque2;
    
    printf("Valor Total Produto %s: R$%.2f\n", nomeProduto2, quantidadeEstoque2 * precoProduto2);
    printf("==========================================\n");

    printf("\n");
    printf("PRODUTO 3\n");
    printf("==========================================\n");

    printf("Digite o codigo do produto 3:");
    scanf(" %i", &codigoProduto3);

    printf("Digite o nome do produto 3:");
    scanf(" %s", &nomeProduto3);

    printf("Digite o preco do produto 3: R$");
    scanf(" %f", &precoProduto3);

    printf("Digite a quantidade do produto 3:");
    scanf(" %i", &quantidadeEstoque3);

    precoTotalEstoque += quantidadeEstoque3 * precoProduto3;
    totalProdutosEstoque += quantidadeEstoque3;
    
    printf("Valor Total Produto %s: R$%.2f\n", nomeProduto3, quantidadeEstoque3 * precoProduto3);
    printf("==========================================\n");

    printf("\n");
    printf("PRODUTO 4\n");
    printf("==========================================\n");

    printf("Digite o codigo do produto 4:");
    scanf(" %i", &codigoProduto4);

    printf("Digite o nome do produto 4:");
    scanf(" %s", &nomeProduto4);

    printf("Digite o preco do produto 4: R$");
    scanf(" %f", &precoProduto4);

    printf("Digite a quantidade do produto 4:");
    scanf(" %i", &quantidadeEstoque4);

    precoTotalEstoque += quantidadeEstoque4 * precoProduto4;
    totalProdutosEstoque += quantidadeEstoque4;
    
    printf("Valor Total Produto %s: R$%.2f\n", nomeProduto4, quantidadeEstoque4 * precoProduto4);
    printf("==========================================\n");

    printf("\n");
    printf("PRODUTO 5\n");
    printf("==========================================\n");

    printf("Digite o codigo do produto 5:");
    scanf(" %i", &codigoProduto5);

    printf("Digite o nome do produto 5:");
    scanf(" %s", &nomeProduto5);

    printf("Digite o preco do produto 5: R$");
    scanf(" %f", &precoProduto5);

    printf("Digite a quantidade do produto 5:");
    scanf(" %i", &quantidadeEstoque5);

    precoTotalEstoque += quantidadeEstoque5 * precoProduto5;
    totalProdutosEstoque += quantidadeEstoque5;
    
    printf("Valor Total Produto %s: R$%.2f\n", nomeProduto5, quantidadeEstoque5 * precoProduto5);
    printf("==========================================\n");

    // resumo das entradas do usuário
    printf("\n");
    printf("\n");
    printf("`-________________________________________-`\n");
    printf("            RESUMO DO ESTOQUE\n");
    printf("`-________________________________________-`\n");
    printf("\n");

    printf("\n");
    printf("PRODUTO 1\n");
    printf("==========================================\n");
    printf("Codigo: %i\n", codigoProduto1);
    printf("Produto: %s\n", nomeProduto1);
    printf("Preco: R$%.2f\n", precoProduto1);
    printf("Valor em estoque: R$%.2f\n", quantidadeEstoque1 * precoProduto1);
    printf("==========================================\n");

    printf("\n");
    printf("PRODUTO 2\n");
    printf("==========================================\n");
    printf("Codigo: %i\n", codigoProduto2);
    printf("Produto: %s\n", nomeProduto2);
    printf("Preco: R$%.2f\n", precoProduto2);
    printf("Valor em estoque: R$%.2f\n", quantidadeEstoque2 * precoProduto2);
    printf("==========================================\n");

    printf("\n");
    printf("PRODUTO 3\n");
    printf("==========================================\n");
    printf("Codigo: %i\n", codigoProduto3);
    printf("Produto: %s\n", nomeProduto3);
    printf("Preco: R$%.2f\n", precoProduto3);
    printf("Valor em estoque: R$%.2f\n", quantidadeEstoque3 * precoProduto3);
    printf("==========================================\n");
    
    printf("\n");
    printf("PRODUTO 4\n");
    printf("==========================================\n");
    printf("Codigo: %i\n", codigoProduto4);
    printf("Produto: %s\n", nomeProduto4);
    printf("Preco: R$%.2f\n", precoProduto4);
    printf("Valor em estoque: R$%.2f\n", quantidadeEstoque4 * precoProduto4);
    printf("==========================================\n");
    
    printf("\n");
    printf("PRODUTO 5\n");
    printf("==========================================\n");
    printf("Codigo: %i\n", codigoProduto5);
    printf("Produto: %s\n", nomeProduto5);
    printf("Preco: R$%.2f\n", precoProduto5);
    printf("Valor em estoque: R$%.2f\n", quantidadeEstoque5 * precoProduto5);
    printf("==========================================\n");

    // resumo total dos dados
    printf("\n");
    printf("\n");
    printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-\n");
    printf("            RESUMO TOTAL\n");
    printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-\n");
    printf("\nTotal de produtos em estoque: %i", totalProdutosEstoque);
    printf("\nValor total do estoque: R$%.2f", precoTotalEstoque);

    return 0;
}
