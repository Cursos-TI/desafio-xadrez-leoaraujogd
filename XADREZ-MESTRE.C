#include <stdio.h>

//RECURSIVIDADE
void MovCasas(int numCasas, char direcao[14], char peca[6]){
   
    if (numCasas > 0 ){
        printf("\n%s para %s.", peca, direcao);
        MovCasas( numCasas - 1 , direcao, peca);
    }
}

int main(){

    int qtde_mov = 1,  opcao, mov = 1;
    int segueJogo;
    
    do {

        //MENU
        printf(" INFORME QUAL PEÇA DO XADREZ A SER MOVIDA. \n \n ");
        printf(" 1 - TORRE\n ");
        printf(" 2 - BISPO\n ");
        printf(" 3 - RAINHA\n ");  
        printf(" 4 - CAVALO\n ");        
       
        printf("\nNúmero da Função: ");  
        scanf("%d", &opcao);

        //VERIFICA SE OPÇÃO É VALIDA
        if ( (opcao >= 1) && ( opcao <= 4) )
        { 
        
            switch (opcao)
            {
            case 1: 
               //RECURSIVIDADE
                MovCasas(5, "DIREITA", "TORRE");

               // usando while
               /*while ( qtde_mov <= 5 )  {
                 printf("Torre para DIRETA.\n");
                    qtde_mov++;
                } */       
                break;

            case 2: 
                //RECURSIVIDADE
                MovCasas(5, "CIMA, DIREITA", "BISPO");

                // usando do while          
                /*do {
                    printf("Bispo para CIMA, DIREITA.\n");
                    qtde_mov++;        
                  }
                while (qtde_mov < 6);  */

                break;      
            
            case 3:
                //RECURSIVIDADE
                MovCasas(8, "ESQUERDA", "RAINHA");

                // usando for
                /*for (qtde_mov = 0; qtde_mov <= 7; qtde_mov++) {
                    printf("RAINHA para ESQUERDA.\n");
                }  */
               break;        
        
            // NIVEL AVENTUREIRO
            case 4: 
                //RECURVIDADE
                MovCasas(2, "CIMA", "CAVALO");
                MovCasas(1, "DIREITA", "CAVALO");

                // usandolopps aninhados
                /*while ( mov-- ) {
                   for (qtde_mov = 0; qtde_mov < 2 ; qtde_mov++){
                           printf("CAVALO pra CIMA.\n");
                 };
                
                   printf("CAVALO pra DIREITA.\n");
                }  */       
          
               break;          
            }     
        }   
        else {
               printf("Opção Inválida!");        
            }

        printf("\n\nDeseja jogar Novamente ?\n");

        printf("1- para SIM.\n");
        printf("Outro Número, para SAIR do Jogo.\n");
    
        scanf("%d", &segueJogo );
    
        printf("\n");

    } while (  segueJogo == 1 );   

    return  0;
}    