#include <stdio.h>
#include<stdio.h>
int main() {

  int idade;
char nome[50];
char titulo[50];

int voto, Gabriel=0, Vitor=0, Hugo=0, votoNulo=0, votoBranco=0, contador=0;	
	
printf("Digite sua idade:\n");
scanf("%i", &idade);

 if(idade >18){	
 } else 
 	  if(idade < 18) {
 			printf("INVALIDO idade insuficiente!");
 			return 0; 
			 }
   printf("Digite seu nome completo \n");
    scanf("%s\n", nome);
    printf("Digite o numero do seu titulo\n");
    scanf("%s\n", titulo);
    printf(": %s %s\n", nome,titulo);
	scanf("digite qualquer tecla para contiuar\n",fflush (stdin));
    


 for(contador=0;contador<6;contador++) {
 	
	
	
 	printf("\n***Seja bem vindo as eleicoes 2022!***\n\n");
 	
 	printf("numero do votos %d\n",contador);
 	printf("16-Gabriel;\n");
 	printf("45-Vitor;\n");
 	printf("22-Hugo;\n");
 	printf("0-nulo;\n");
 	printf("1-Branco;\n");
    printf("Digite o numero correspondente ao seu voto aperte Confirmar:");
 	scanf("%d" ,&voto);
  
 	switch(voto){
 		case 16:
 		Gabriel=Gabriel+1;
 		printf("\nVOTO PARA GABRIEL! registrado\n");
 		break;
 		
 		
 		case 45:
 		Vitor=Vitor+1;
 		printf("\nVOTO PARA Vitor! registrado\n");
 		break;
 		
 		
 		case 22:
 		Hugo=Hugo+1;
 		printf("\nVOTO PARA Hugor! registrado\n");
 		break;
 		
		case 0: 
		votoNulo=votoNulo+1;
		printf("\nVOTO NULO! registrado\n");
		break;
		
		case 1:
		votoBranco=votoBranco+1;
		printf("\nVOTO EM BRANCO! registrado\n");
		break;
		   
		default:
			printf("\nOPCAO INVALIDA!\n");
			break;
		
		 
 }
}
 
    system("cls");
  printf("\n\nRESULDADO DOS VOTOS\n\n");
  printf("\nGabriel %d votos",Gabriel);
  printf("\nVitor %d votos",Vitor);
  printf("\nHugo %d votos",Hugo);	
  printf("\nnulo %d votos",votoNulo);
   printf("\nBranco %d votos",votoBranco);
  
  printf("\n\n****Vencedor****\n\n");
  
  if((Gabriel>Vitor)&&(Gabriel>Hugo)){
  	printf("\nGabriel Venceu!!\n");

  }else if((Vitor>Gabriel)&&(Vitor>Hugo)){
  		printf("\nVitor Venceu!!\n");
  
  }else if((Hugo>Gabriel)&&(Hugo>Vitor)){
   	printf("\nHugo Venceu!!\n");
  }
  
}
