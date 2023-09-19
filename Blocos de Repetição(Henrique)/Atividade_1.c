#include <stdio.h>

int main(){
	int i,escolha;
	
	while(i=1){
	
		printf("1- Escolha Teste.\n2- Escolha Teste.\n3- Escolha Teste.\n4- Escolha Teste.\n5- Escolha Teste.\n6- Escolha Sair\n");
		scanf("%d", &escolha);
	
		switch(escolha){
			
			case 1:
				printf("teste\n");
				
				break;
				
			case 2:
				printf("teste\n");
				
				break;
				
			case 3:
				printf("teste\n");
				
				break;
			
			case 4:
				printf("teste\n");
				
				break;
			
			case 5:
				printf("teste\n");
				
				break;
				
			case 6:
				printf("sair\n");	
				i++;
				return 0;
			
		}	
	}
	
	printf("crhistofer é gay!!");
	return 0;
}
