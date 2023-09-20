#include <stdio.h>
int main(){
    
	int k, escolha;
	
	while(k = 1) {
		printf("Escolha uma atividade: \n"
		"1- Atividade 1.\n"
		"2- Atividade 2.\n"
		"3- Atividade 3.\n"
		"4- Atividade 4.\n"
		"5- Atividadae 5.\n"
		"6- Atividadae 6.\n"
		"7- Atividadae 7.\n"
		"8- Atividadae 8.\n"
		"9- Atividadae 9.\n"
		"10- Atividadae 10.\n"
		"11- Atividadae 11.\n"
		"12- Atividadae 12.\n"
		"13- Atividadae 13.\n"
		"14- Atividadae 14.\n"
		"15- Atividadae 15.\n"
		"16- Atividadae 16.\n"
		"17- Atividadae 17.\n"
		"18- Atividadae 18.\n"
		"19- Atividadae 19.\n"
		"20- Atividadae 20.\n"
		"21- Sair\n");
		scanf("%d",&escolha);
	
		switch(escolha){
			case 1:
                // Atividade 1: Mostra os números de 1 a 10, um por linha.
                printf("Atividade 1\n\n");
                for (int i = 1; i <= 10; i++) {
                    printf("%d\n", i);
                }
                break;
                
            case 2:
                // Atividade 2: Contagem regressiva de 10 até 0 e depois "Fogo!".
                printf("Atividade 2\n\n");
                for (int i = 10; i >= 0; i--) {
                    printf("%d\n", i);
                }
                printf("Fogo!\n");
                break;
                
            case 3:
                // Atividade 3: Mostra múltiplos de 5 de 1 a 100.
                printf("Atividade 3\n\n");
                for (int i = 5; i <= 100; i += 5) {
                    printf("%d\n", i);
                }
                break;
                
            case 4:
                // Atividade 4: Soma dos primeiros 100 números inteiros.
                printf("Atividade 4\n\n");
                int soma1 = 0;
                for (int i = 1; i <= 100; i++) {
                    soma1 += i;
                }
                printf("Soma: %d\n", soma1);
                break;
                
            case 5:
                // Atividade 5: Números pares até um número lido.
                printf("Atividade 5\n\n");
                int numero1;
                printf("Informe um número: ");
                scanf("%d", &numero1);
                for (int i = 2; i <= numero1; i += 2) {
                    printf("%d\n", i);
                }
                break;
                
			case 6:
				//6. Escreva um algoritmo que some os números fornecidos pelo usuário até que o número lido seja iguala zero. Ao final, mostre o resultado da soma.
				printf("Atividade 6\n\n");
				
				int numero2;
				int soma2 = 0;
				
				printf("Digite 0 para sair.\n");
				while (numero2 = 1){
				    printf("Digite um numero: \n");
				    scanf("%d", &numero2);
				    
				    if (numero2 == 0){
				        break;
				    }    
				    soma2 += numero2;
				}
				printf("Soma dos numeros é: %d\n\n",soma2);
				break;
				
			case 7:
				//7. Escreva um algoritmo que apresente na tela a tabuada de um número lido do teclado. Por exemplo,considerando que o número lido é 2, o formato da 
				//apresentação deve ser o seguinte:ALGORITMO exemplo_3VARINTEIRO: contador;INICIOPARA(contador ? 1; contador <= 5; contador ? contador + 1) 
				//FAÇAESCREVA(contador);FIM_PARAFIM
				printf("Atividade 7\n\n");
				
				int numero3, res1;
				
				printf("Informe um número: ");
				scanf("%d",&numero3);
				
				for(int i=1; i<=10; i++){
                    res1= numero3 * i;
				    printf("%d * %d = %d\n", numero3, i, res1);
				}
				break;
				
			case 8:
				//8. Escreva um algoritmo que mostre a tabuada de um número inteiro qualquer que será digitado pelousuário, mas a tabuada não deve necessariamente
				// iniciar em 1 e terminar em 10, ou seja, o valorinicial e final devem ser informados também pelo usuário, conforme mostrado no exemplo a seguir:
				printf("Atividade 8\n\n");
				int start1,end1,soma3, numero4;
				printf("Informe o número inicial: \n");
				scanf("%d",&start1);
				printf("Informe o número final: \n");
				scanf("%d",&end1);
				printf("Informe o número de cálculo: \n");
				scanf("%d",&numero4);
				
				for(int i = start1; i <= end1; i++){
				    soma3 = numero4 * i;
				    printf("%d * %d = %d\n", numero4, i, soma3);
				}
				
				break;
				
			case 9:
				//9. Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius eFarenheit. A faixa de temperaturas que
				//deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de5 graus.
				printf("Atividade 9\n\n");
				
				float Fahrenheit;
				
				for(int i= 0; i<=100; i+=5){ 
				    Fahrenheit = (i * 9/5) + 32;
				    printf("Celsius: %d e Fahrenheit:  %f\n\n",i ,Fahrenheit);
				}
				break;
			case 10:
				//10. Escreva um algoritmo que calcule o fatorial de um número positivo qualquer. Por exemplo, se onúmero for 5, o resultado será 120 (5 * 4 * 3 * 2 * 1 = 120). 
				//É importante obsevar que o fatorial donúmero 0 é igual a 1.
				printf("Atividade 10\n\n");
			
				int numero5, res2;
				printf("Informe um número: \n");
				scanf("%d",&numero5);
				res2 = 1;
				
				for(int i = 1; i<=numero5; i++){
				    if(numero5 == 0){
				        printf("O fatorial é: 1\n");
				        break;
				    }
				    res2 = res2 * i;
				}
			    printf("O fatorial é: %d\n",res2);
				break;
			case 11:
				//11. Escreva um algoritmo que escreva os 10 primeiros termos da série 1, 3, 9, 27, ...
				printf("Atividade 11\n\n");
				
				break;
			case 12:
				//12. Escreva um algoritmo que mostre o resultado da série: 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1.Resultado: 423.93.
				printf("Atividade 12\n\n");
				
				break;
			case 13:
				//13. Escreva um algoritmo que mostre o resultado dos primeiros 20 termos da série: 1/1 + 3/2 + 5/4 + 7/8 +... Resultado: 6.00.
				printf("Atividade 13\n\n");
				
				break;
			case 14:
				//14. Escreva um algoritmo que mostre o resultado dos primeiros 50 termos da série: 1000/1 - 997/2 + 994/3- 991/4 + ... Resultado: 685.30.
				printf("Atividade 14\n\n");
				
				break;
			case 15:
				//15. Escreva um algoritmo que receba um número inteiro positivo e escreva a sequência de números deFibonacci. Por exemplo, se o 
				//número for 10, escreva 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.
				printf("Atividade 15\n\n");
				
				break;
			case 16:
				//16. Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3,4,...) para que a sua soma ultrapasse
				// o valor 100 o mínimo possível.
				printf("Atividade 16\n\n");
				
				break;	
			case 17:
				//17. A definição de "amplitude" em Estatística é dada pela grandeza numérica resultante da diferença entreo maior valor e o menor valor do 
				//conjunto de valores de uma amostra. Escreva programa que leia umasequencia de números reais positivos terminada em zero (o número zero não 
				//deve ser processadopois serve para marcar o final da entrada de dados). O programa deve determinar e mostrar o valor daamplitude estatística 
				//dos valores. Exemplo: para a sequencia 4.5, 5.2, 1.7, 1.3, 1.9, 2.2, 8.3, 9.1, 5.4 e 0,teremos o resultado de 7.8 como 
				//amplitude.2 x 1 = 22 x 2 = 42 x 3 = 62 x 4 = 82 x 5 = 102 x 6 = 122 x 7 = 142 x 8 = 162 x 9 = 182 x 10 = 20
				//Mostrar a tabuada de: 5Começar por: 4Terminar em: 75 X 4 = 205 X 5 = 255 X 6 = 305 X 7 = 35
				printf("Atividade 17\n\n");
				
				break;
			case 18:
				//18 - Escreva um algoritmo que apresente o seguinte menu:Se as opções 1, 2, 3 ou 4 forem escolhidas, mostrar na tela o nome da 
				//opção (Inserir, Excluir, Consultar,Listar). Se a opção 5 for escolhida, encerrar a execução do algoritmo.
				printf("Atividade 18\n\n");
				
				break;
			case 19:
				//19. Escreva um algoritmo que apresente na tela o seguinte menu:Caso o usuário escolha a opção 1, ele deve digitar um número par 
				//para voltar ao menu. O mesmo deve serfeito na opção 2, mas para um número ímpar. Caso o usuário escolha a opção 3, o algoritmo 
				//deve apresentar a quantidade de números pares digitados na opção 1, a quantidade de números ímparesdigitados na opção 2 e encerrar o algoritmo.
				printf("Atividade 19\n\n");
				
				break;
			case 20:
				//20. Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário (a senha válida éo número 2009). Se a senha informada pelo 
				//usuário for inválida, a mensagem "ACESSO NEGADO" deveser mostrado na tela e deve ser solicitada uma nova senha até que ela seja válida. 
				//Caso contrário deveser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com um número de vezes que a senhafoi informada.
				printf("Atividade 20\n\n");
				
				break;
				
			//Fecha o Programa encerrando o loop do While				
			case 21:
				printf("sair\n");	
				k++;
		        return 0;
			default:
                printf("Opção inválida. Tente novamente.\n");
                break;
			
		}//Fim do switch	
		
	}//Fim do While
	
}//Fim do int Main
