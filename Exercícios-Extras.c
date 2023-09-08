#include <stdio.h>

int main() {
    int escolha;
    
    printf("Escolha uma atividade: ");
    scanf("%d",&escolha);
    
    switch (escolha){
        
    case 1:
    // 1. Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idadedessa pessoa expressa em dias. Considerar ano com 365 dias e mês com 30 dias.
    
    int anos,meses,dias, total;
    
    printf("informe a sua idade em anos: ");
    scanf("%d", &anos);
    
    printf("informe a sua idade em anos: ");
    scanf("%d", &meses);
    
    printf("informe a sua idade em anos: ");
    scanf("%d", &dias);
    
    total = anos * 365 + meses * 30 + dias;
    
    printf("O total em dias é de: %d",total);
    
    break;
    
    case 2:
     //2. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem dodistribuidor e dos impostos aplicados ao custo de fábrica. Supondo que o percentual do distribuidorseja de 28% e os impostos de 45%, escrever um programa para ler o custo de fábrica de um carro,calcular e escrever o custo final ao consumidor.
    float custo_de_fabrica, custo_novo;
    
    printf("Escreva o custo de fabrica: ");
    scanf("%f",&custo_de_fabrica);
    
    custo_novo = custo_de_fabrica * 0.28 + custo_de_fabrica * 0.45 + custo_de_fabrica;
    
    printf("O custo do carro novo sera de: %.2f", custo_novo);
    
    break;
    
    case 3:
     //3. Elabore um programa que leia dois valores inteiros distintos e apresente o resultado da diferença domaior valor pelo menor valor.
    int valor1, valor2;
    
    printf("Informe o primeiro valor: ");
    scanf("%d",&valor1);
    
    printf("Informe o primeiro valor: ");
    scanf("%d",&valor2);
    
    if (valor1 > valor2){
        valor1 = valor1 - valor2;
        printf("O maior valor é %d e a diferença entre os valores é de: %d",valor1, valor2);
    }else{
        valor2 = valor2 - valor1;
        printf("O maior valor é %d e a diferença entre os valores é de: %d",valor2, valor1);
    }
    break;
    
    case 4:
    //4. Escreva um programa que leia dois números inteiros distintos e verifique se o maior número digitadoé divisível pelo menor. Se verdadeiro, apresente a mensagem "Estes números são divisíveis!", casocontrário, apresente a mensagem "Estes números não são divisíveis!".
    int num1, num2;
    printf("Insira um numero: ");
    scanf("%d",&num1);
    
    printf("Insira o segundo numero: ");
    scanf("%d",&num2);
    if (num1>num2){
        printf("O valor %d é maior",num1);
        if (num1 % num2 == 0){
            printf(" e é divisivel por %d",num2);
        }else
            printf(" e não é divisivel por %d",num2);
    }else {
        printf("O valor %d é maior",num2);
        if (num2 % num1 == 0){
            printf(" e é divisivel por %d",num1);
        }else
            printf(" e não é divisivel por %d",num1);
    }
    
    break;
    
    case 5:
    //5. Escreva um programa que receba o valor do salário de uma pessoa e o valor de um financiamentopretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programadeverá escrever "Financiamento Concedido"; senão, ele deverá escrever "Financiamento Negado".Independente de conceder ou não o financiamento, o programa escreverá depois a frase "Obrigadopor nos consultar!".
    float salario, financiamento;
    
    printf("Informe o salario: ");
    scanf("%f",&salario);
    
    printf("Informe o financiamento: ");
    scanf("%f",&financiamento);
    
    if (financiamento<=(salario*5)){
       printf("Financiamento Concedido.\n"); 
    }else
    printf("Financiamento Negado.");
    
    printf("Obrigado por nos consultar.\n");
    
    break;
    
    case 6:
    //6.Escreva um programa que solicita ao usuário o valor atual e a categoria de um determinado produto.O programa deverá calcular o novo valor deste produto conforme a categoria em que este seencontra.
    float valor_atual, valor_novo;
    char categoria;
    
    printf("Informe o valor atual: ");
    scanf("%f",&valor_atual);
    
    printf("Informe a categoria\nA: 20%\nB: 15%\nC: 11%\nD: 8%\nE: 5%\n");
    scanf(" %c",&categoria);
    
    if (categoria == 'A'){
       valor_novo = valor_atual * 0.20 + valor_atual;  
    }else if (categoria == 'B'){
       valor_novo = valor_atual * 0.15 + valor_atual;  
    }else if (categoria == 'C'){
       valor_novo = valor_atual * 0.11 + valor_atual;  
    }else if (categoria == 'D'){
       valor_novo = valor_atual * 0.08 + valor_atual;  
    }else if (categoria == 'E'){
       valor_novo = valor_atual * 0.05 + valor_atual;  
    }
    
    printf("O Valor novo sera de %.2f", valor_novo);
    
    break;   
    }
    return 0;
}
