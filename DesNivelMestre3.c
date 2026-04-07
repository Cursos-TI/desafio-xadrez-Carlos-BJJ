#include <stdio.h>

void torre(int casas){
    
    int x = 1;
    if(x <= casas){
        printf("Direita → ");
        torre(casas - 1); //Recursividade para repetição do movimento da torre
    }
    printf("\n");
}

void bispo(int casas){
//Enquanto x não for igual a quantidade de casas esse loop se repetirá
    for(int x = 1; x <= casas; x++){
        printf("Cima, Direita ↗ "); 
    } 
    printf("\n");       
}

void rainha(int casas){
//Enquanto x não for igual a quantidade de casas esse loop se repetirá (Porém agora com a estrutura while)
    int x = 1;
    while (x <= casas){
        printf("⭠ Esquerda");
        x++;
    }
    printf("\n");
}

void cavalo(int casas){
    int x = 1, y = 1 ;

//Esse loop se repetirá até que a recursividade faça a quantidade de casas ser menor que zero

    if(casas > 0){
    do{
        printf("\nCima ↑ ");
        x++;
    }while (x <= 2);

    for(y; y <= 1; y++){
        printf(" Direita → \n");
    }
    cavalo(casas - 1);
    printf("\n");
    }

    }

//Procedimento para o Menu Interativo

void MenuInterativo(){
    int opcao;

do{
    printf("\n------------------Opções------------------\n");
    printf("[1] TORRE \n");
    printf("[2] BISPO \n");
    printf("[3] RAINHA \n");
    printf("[4] CAVALO \n");
    printf("[0] Sair do Jogo \n");
    printf("Escolha qual peça você quer mexer: \n");
    scanf("%d", &opcao);
    printf("\n------------------------------------------\n");

    switch (opcao)
    {
    case 1:

        int num1;
        printf("Digite quantas vezes você andará( ♜ ♖ ): ");
        scanf("%d", &num1);
        torre(num1);
        
    break;

    case 2:
    
        int num2;
        printf("Digite quantas vezes você andará( ♝ ♗ ): ");
        scanf("%d", &num2);
        bispo(num2);
        
    break;

    case 3:
    
        int num3;
        printf("Digite quantas vezes você andará( ♛ ♕ ): ");
        scanf("%d", &num3);
        rainha(num3);
        
    break;

    case 4:
    
        int num4;
        printf("Digite quantas vezes você andará( ♞ ♘ ): ");
        scanf("%d", &num4);
        cavalo(num4);
        
    break;

    case 0:
        printf("Saindo do jogo...");  
    break;

    default:
        printf("Opção Inválida");
    break;
    }

}while (opcao != 0);


}

int main(){

//Chamada do procedimento
    MenuInterativo();

//Finalização do programa
    return 0;
    
}