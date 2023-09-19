#include <std.io>

int main{

  int i;
  int escolha;
  
	while(i=1){
		printf("1- Escolha Teste.\n2- Escolha Teste.\n3- Escolha Teste.\n4- Escolha Teste.\n5- Escolha Teste.\n6- Escolha Sair\n");
		scanf("%d", &escolha);
		switch(escolha){
			
			case 1:
				printf("Exercício 1\n");
				
				break;
			case 2:
				printf("Exercício 2\n");
				
				break;
			case 3:
				printf("Exercício 3\n");
				
				break;
			case 4:
				printf("Exercício 4\n");
				
				break;
			case 5:
				printf("Exercício 5\n");
				
				break;
      
      //Fecha o programa
			case 6:
				printf("Saindo.\n");	
				i++;
				return 0;
		}//Fim Switch	
	}//Fim While
}//Fim int Main
