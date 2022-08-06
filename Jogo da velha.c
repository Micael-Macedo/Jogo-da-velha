#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

void limpaTela(){
	system("cls");
}
void carregando(){

	printf("Loading.");
	sleep(1);
	system("cls");
	printf("Loading..");
	sleep(1);
	system("cls");

}

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j, k, x, y;
	char op, op2;
	
	printf("BEM VINDO AO JOGO DA VELHA, VOCE ESTÁ PRONTO \n >Sim ou Não? \n>");	
	
	do{
		scanf(" %c", &op);		
		if(op != 's' && op != 'S' && op != 'N' && op != 'n'){
			printf("Opção inválida, digite S ou N \n");
		}
				
	}while(op != 's' && op != 'S' && op != 'N' && op != 'n');
	
	carregando();
	
	if(op == 'n' || op == 'N'){
		printf("Tu nem tentou jogar ;-;\n");
		return 0;
	}
	do{
		int mat[3][3] = {0,0,0,0,0,0,0,0,0}, jog = 0, vit = 0;
		char *velha[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
		char posi[9][9] = {"0.0","0.1","0.2","1.0","1.1","1.2","2.0","2.1","2.2"};
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){	
				velha[i][j] = posi[k];			
				k++;
			}
		}
		k = 0;
		sleep(1);
		for(i = 0; i <= 9; i++){
			limpaTela();
			printf("   %s   |   %s   |   %s   \n----------------------------\n   %s   |   %s   |   %s\n----------------------------\n   %s   |   %s   |   %s\n", velha[0][0],velha[0][1], velha[0][2], velha[1][0],velha[1][1], velha[1][2], velha[2][0],velha[2][1], velha[2][2]);
		
			// Condições de vitória do jogador 1
			
			if(velha[0][0] == " X " && velha[1][0] == " X " && velha[2][0] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][1] == " X " && velha[1][1] == " X " && velha[2][1] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;			
				break;
			}
			if(velha[0][2] == " X " && velha[1][2] == " X " && velha[2][2] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;			
				break;
			}
			if(velha[0][0] == " X " && velha[1][1] == " X " && velha[2][2] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;			
				break;
			}
			if(velha[0][2] == " X " && velha[1][1] == " X " && velha[2][0] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][0] == " X " && velha[0][1] == " X " && velha[0][2] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[1][0] == " X " && velha[1][1] == " X " && velha[1][2] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[2][0] == " X " && velha[2][1] == " X " && velha[2][2] == " X "){
				printf("O Jogo acabou, jogador 1 venceu!!! \n");
				vit++;
				break;
			}
	
			//fim condições de vitória do jogador 1
			
			// Condições de vitória do jogador 2
			
			if(velha[0][0] == " O " && velha[1][0] == " O " && velha[2][0] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][1] == " O " && velha[1][1] == " O " && velha[2][1] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][2] == " O " && velha[1][2] == " O " && velha[2][2] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][0] == " O " && velha[1][1] == " O " && velha[2][2] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][2] == " O " && velha[1][1] == " O " && velha[2][0] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[0][0] == " O " && velha[0][1] == " O " && velha[0][2] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[1][0] == " O " && velha[1][1] == " O " && velha[1][2] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
			if(velha[2][0] == " O " && velha[2][1] == " O " && velha[2][2] == " O "){
				printf("O Jogo acabou, jogador 2 venceu!!! \n");
				vit++;
				break;
			}
	
			//fim condições de vitória do jogador 2
		
			if(i < 9){
				printf("Turno do Jogador %d \n", jog+1);
				
				do{
					printf("Digite a linha e depois a coluna \n");
					scanf("%d%d", &x, &y);
					if(x > 2 || y > 2){
						printf("Opção inválida \n");
					}
				}while(x > 2 || y > 2 );
		
				mat[x][y];
				
				if(mat[x][y] == 0 && jog == 0){
					mat[x][y] = 1;
					velha[x][y] = '\0';
					velha[x][y] = " X ";
					jog++;
				}
				else if(mat[x][y] == 0 && jog == 1){
					mat[x][y] = 1;
					velha[x][y] = '\0';
					velha[x][y] = " O ";
					jog--;
				}
				else{
					printf("Opção já selecionada antes, digite um número válido \n");
					i--;
					sleep(2);
				}		
			}
		}
		if(vit == 0){
			printf("\nJogo Empatado \n");
		}
		do{
			printf("Deseja Continuar Jogando?\n S: Sim \n N: Não \n");
			scanf(" %c", &op2);			
		}while(op2 != 's' && op2 != 'S' && op2 != 'N' && op2 != 'n');
	}while(op2 == 's' || op2 == 'S');
	printf("\nGAME OVER \n");
}

