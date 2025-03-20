#include <stdio.h>

int main()
{
    int qtde_mov = 1,  opcao, mov =1;
    
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

            while ( qtde_mov <= 5 )  {
                printf("Torre para DIRETA.\n");
                qtde_mov++;
            }        
            break;

        case 2: 

            do {
                printf("Bispo para CIMA, DIREITA.\n");
                qtde_mov++;        
              }
            while (qtde_mov < 6);  

            break;      
            
         case 3:
           for (qtde_mov = 0; qtde_mov <= 7; qtde_mov++) {
               printf("RAINHA para a ESQUERDA.\n");
           }  
           break;
        
        
        // NIVEL AVENTUREIRO
        case 4: 
                     
           while ( mov-- ) {
                for (qtde_mov = 0; qtde_mov < 2 ; qtde_mov++){
                   printf("CAVALO pra CIMA.\n");
                };
                
                printf("CAVALO pra DIREITA.\n");
           }         
          
           break;          
        }     
    }   
    else {
           printf("Opção Inválida!");        
        }

    return  0;
}    