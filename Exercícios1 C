#include <stdio.h>

int main() {
    int escolha;
   
    printf("Escolha um programa para executar: \n");
    printf("1-Calculo da Área do Triângulo.\n");
    printf("2-Tranformar horário atual em segundos.\n");
    printf("3-Antecessor e Sucessor de um número.\n");
    printf("4-Calculo de Média de notas.\n");
    printf("5-Conversor de Celsius para Farenheit.\n");
    printf("6-Conversor de Real para Dólar.\n");
    printf("7-Consumo médio e autonomia de um carro.\n");
    printf("8-Calculadora de Autonomia de carro.\n");
    printf("9-Calculo de Gorjeta.\n");
    printf("10-Calculo de Salário de vendedor de loja de sapatos.\n");
    printf("11-Cálculo de porcentagem de votos.\n");
    printf("12-Troca de valores.\n");
    printf("13-Cálculo de altura com base em sombra.\n");
    printf("14-Preço do Quilowatts.\n");
    printf("15-Quantidade de litros totais.\n");
    printf("16-Caixa Eletrônico.\n");
   
    scanf("%d",&escolha);
   
    switch (escolha) {
        case 1: {
           int area, base, altura;
           
           printf("BEM VINDO AO INCRIVEL CÁLCULO DE ÁREA DE TRIÂNGULOS\n");
           printf("Digite a Base do triângulo: \n");
           scanf("%d",&base);
           printf("Digite a Altura do triângulo: \n");
           scanf("%d",&altura);
           
           area = (base*altura)/2;
           
           printf("A área do seu incrivel triângulo é de: %d \n",area);
           
           break;
         
        }
        case 2: {
           int horas, minutos, segundos, tempoTotal;
           
           printf("BEM VINDO AO SUPER CONVERSOR DE HORÁRIO PARA MINUTOS!!\n");
           printf("Informe as horas: \n");
           scanf("%d",&horas);
           printf("Informe os minutos: \n");
           scanf("%d",&minutos);
           printf("Informe os segundos: \n");
           scanf("%d",&segundos);
           
           tempoTotal = (horas * 3600) + (minutos * 60) + segundos;
           
           printf("O total em segudos é de: %d",tempoTotal);
           
           break;
           
        }
        case 3: {
            int numero, antecessor, sucessor;
         
            printf("BEM VINDO AO SUPER E INCRÍVEL PROGRAMA DE NÚMEROS\nSALVANDO SUA VIDA DE UM TREMENDO SUFOCO\nQUAL SERÁ O SUCESSOR E O ANTECESSOR DO SEU NÚMERO FAVORITO?!?\n");
            printf("\nEscreva o NÚMERO: ");
            scanf("%d",&numero);
         
            antecessor = numero-1;
            sucessor = numero+1;
         
            printf("O SUCESSOR é: %d \ne o ANTECESSOR é: %d",sucessor,antecessor);
           
            break;
           
        }
        case 4: {
            float nota1, nota2, nota3, media;
            printf("BEM VINDO AO ALGORITIMO DE MÉDIA DE NOTAS!!!\n");
            printf("Para começar informe a primeria nota: \n");
            scanf("%f",&nota1);
           
            printf("Agora insira a segunda nota: \n");
            scanf("%f",&nota2);
           
            printf("E para finalizar a última nota: \n");
            scanf("%f",&nota3);
           
            media = (nota1*2+nota2*3+nota3*5)/10;
           
            printf("Aqui está sua média de notas: %.2f",media);
           
            break;
           
        }
        case 5: {
            int celsius, farenheit;
           
            printf("BOAS VINDAS AO MELHOR CONVERSOR DE TEMPERATURA QUE EXISTE!!!\n");
            printf("Para começarmos informe a temperatura em ºCelsius: \n");
            scanf("%d",&celsius);
           
            farenheit = (celsius * 9 / 5) + 32;
           
            printf("Essa temperatura em Farenheit é: %dº.\n",farenheit);
           
            break;
           
        }
        case 6: {
            float real, dolar, taxa;
           
            printf("Seja muito bem vindo ao nosso conversor para dolar ajustável.\n");
            printf("Para começar informe a taxa do câmbio: \n");
            scanf("%f",&taxa);
           
            printf("Agora insira o valor em Real: \n");
            scanf("%f",&real);
           
            dolar = real / taxa;
           
            printf("O dinheiro convertido em dólar é de: $%.1f.\n",dolar);
            if (taxa >= 4.5)
                printf("O dolar está bem caro hoje.");
               
            break;
           
        }
        case 7: {
            float capacidadeTanque, litrosAbastecidos, kmPercorrida, autonomia, consumoMedio;
           
            printf("Venha ja, e calcularemos a autonomia de seu carro!!!\n");
            printf("Informe a Capacidade total do tanque: \n");
            scanf("%f",&capacidadeTanque);
           
            printf("Agora informe a quilômetragem percorrida: \n");
            scanf("%f",&kmPercorrida);
           
            printf("Por último informe quantos litros abasteceu agora: \n");
            scanf("%f",&litrosAbastecidos);
           
            consumoMedio = kmPercorrida/litrosAbastecidos;
            autonomia = (capacidadeTanque - litrosAbastecidos)*consumoMedio;
           
            printf("A autonomia do seu carro antes do abastecimento era de: %.1fKm.",autonomia);
           
            break;
           
        }
        case 8: {
            float km, dias, total;
           
            printf("Informe a quantidade de Km rodada: \n");
            scanf("%f",&km);
           
            printf("Informe a quantidade de Dias que foi alugado: \n");
            scanf("%f",&dias);
           
            total = (dias * 70.00) + (km * 0.15);
           
            printf("O total à pagar será de: R$%.2f\n",total);
           
            break;
           
        }
        case 9: {
            float gasto, total;
           
            printf("Bem vindo ao cálculo de gorjetas, que te ajuda a não faltar na carteira.\n");
           
            printf("Informe o total gasto: \n");
            scanf("%f",&gasto);
           
            total = gasto * 0.10;
           
            printf("O total de gorjeta será de: R$%.2f\n",total);
           
            break;
           
        }
        case 10: {
            float comissao, vendas, salario;
           
            printf("Não se perca nos cálculos. Te ajudamos com as contas de seu salário!!!\n");
            printf("Vamos do começo, informe o total de vendas de sapatos no mês: \n");
            scanf("%f",&vendas);
           
            comissao = (vendas * 5) * 0.20;
            salario = comissao + (vendas * 5);
           
            printf("O seu salário é de: %.2f",salario);
           
            break;
           
        }
        case 11: {
            float votosBrancos, votosNulos, votosValidos, eleitoresTotal;
           
            printf("Como nas urnas, vamos manter seus dados seguros, pode confiar!!\n");
            printf("Informe a quantidade de eleitores totais: \n");
            scanf("%f",&eleitoresTotal);
           
            printf("Informe a quantidade de votos Válidos: \n");
            scanf("%f",&votosValidos);
           
            printf("Informe a quantidade de votos Nulos: \n");
            scanf("%f",&votosNulos);
           
            votosBrancos = eleitoresTotal - (votosNulos+votosValidos);
            votosBrancos = (votosBrancos/eleitoresTotal)*100;
            votosValidos = (votosValidos/eleitoresTotal)*100;
            votosNulos = (votosNulos/eleitoresTotal)*100;
           
            printf("A porcentagem de:\nVotos nulos: %.1f\nVotos brancos: %.1f\nVotos válidos: %.1f\n",votosNulos,votosBrancos,votosValidos);
           
            break;
           
        }
        case 12: {
            int numA, numB, numC;
           
            printf("Esse é um dos, se não, o mais útil dos programas!\n");
            printf("Informe o número inteiro A: \n");
            scanf("%d",&numA);
           
            printf("Informe o número inteiro B: \n");
            scanf("%d",&numB);
           
            numC = numA;
            numA = numB;
            numB = numC;
           
            printf("O valor de A agora é: %d\nE o valor de B é: %d",numA,numB);
           
            break;
           
        }
        case 13: {
            float sombraObjeto, sombraPessoa, alturaPessoa, alturaObjeto;
           
            printf("Seu professor tava certo, um dia a regra de 3 ia ser útil!!\n");
            printf("Informe sua altura: \n");
            scanf("%f",&alturaPessoa);
           
            printf("Informe o tamanho da sua sombra: \n");
            scanf("%f",&sombraPessoa);
           
            printf("Informe o tamanho da sombra do prédio: \n");
            scanf("%f",&sombraObjeto);
           
            alturaObjeto = (alturaPessoa*sombraObjeto)/sombraPessoa;
           
            printf("%.2f",alturaObjeto);
           
            break;
           
        }
        case 14: {
            float kw, salario, total, kwPreco;
           
            printf("Agora da pra economizar na conta de luz!\n");
            printf("Informe o salário minímo: \n");
            scanf("%f",&salario);
           
            printf("Informe quantos Quilowatts foram utiizados: \n");
            scanf("%f",&kw);
           
            kwPreço = salario/7/100;
            total = kw * kwPreco;
           
            printf("O preço de cada Quilowatt é de: %.2f\n",kwPreco);
            printf("E o total a ser pago será de: %.2f",total);
           
            break;
           
        }
        case 15: {
            float latinha, garrafa, garrafaG, total;
           
            printf("Saiba como calcular quantos litros irá vender!\n");
            printf("Informe quantas de 350ml foram compradas: \n");
            scanf("%f",&latinha);
           
            printf("Informe quantas de 600ml foram compradas: \n");
            scanf("%f",&garrafa);
           
            printf("Informe quantas de 2L foram compradas: \n");
            scanf("%f",&garrafaG);
           
            total = (garrafaG*2000+garrafa*600+latinha*350)/1000;
           
            printf("A quantidade totais de litros é de: %.1fL",total);
           
            break;
           
        }
        case 16: {
            int saque, cedulas100, cedulas50, cedulas20, cedulas10, cedulas5, cedulas2;
           
            printf("O melhor e mais simples sistemas de Caixas Eletrônicos!!\n");
            printf("Informe o valor do saque: \n");
            scanf("%d",&saque);
           
            cedulas = saque / 100;
            printf("Cédulas de 100: %d\n",cedulas);
            saque %= 100;
       
            cedulas = saque / 50;
            printf("Cédulas de 50: %d\n",cedulas);
            saque %= 50;
           
            cedulas = saque / 20;
            printf("Cédulas de 20: %d\n",cedulas);
            saque %= 20;
           
            cedulas10 = saque / 10;
            printf("Cédulas de 10: %d\n",cedulas);
            saque %= 10;
           
            cedulas5 = saque / 5;
            printf("Cédulas de 5: %d\n",cedulas);
           
            break;
           
        }
        default: {
            printf("Esse não é um programa válido");
            break;
        }
    }
   
    return 0;
}
