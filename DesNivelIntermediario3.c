#include <stdio.h>

int main(){

int c1 = 1, c2 = 1, c3 = 1, n1, n2, n3;

printf("\nDigite quantas casas pra direita você quer andar com a torre ♜ ♖ : ");
scanf("%d", &n1);

for (c1; c1 <= n1; c1++){
    printf("\nDireita →\n ");
}

printf("\nDigite quantas casas pra diagonal você quer andar com o bispo ♝ ♗ : ");
scanf("%d", &n2);

while (c2 <= n2){
    printf("\nCima, Direita ↗\n ");
    c2++;    
}

printf("\nDigite quantas casas pra esquerda você quer andar com a rainha ♛ ♕ : ");
scanf("%d", &n3);

do{
    printf("\n⭠ Esquerda\n ");
    c3++;    
}while (c3 <= n3);

int num, mv_comp = 1;

printf("\nDigite quantas vezes você quer andar com o cavalo ♞ ♘: ");
scanf("%d", &num);

do{ 
    for(int mv_reto = 1; mv_reto <= 2; mv_reto++){
        printf("\nCima ↑");
    }
    printf("\nDireita →");
    mv_comp++;
}while(mv_comp <= num);
 
return 0;

}