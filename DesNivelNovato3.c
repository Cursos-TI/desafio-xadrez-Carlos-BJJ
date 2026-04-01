#include <stdio.h>

int main(){

int c1 = 1, c2 = 1, c3 = 1, n1, n2, n3;

printf("\nDigite quantas casas pra direita você quer andar com a torre ♜ ♖ : ");
scanf("%d", &n1);

for (c1; c1 <= n1; c1++){
    printf("Direita → ");
}

printf("\nDigite quantas casas pra diagonal você quer andar com o bispo ♝ ♗ : ");
scanf("%d", &n2);

while (c2 <= n2){
    printf("Cima, Direita ↗ ");
    c2++;    
}

printf("\nDigite quantas casas pra diagonal você quer andar com a rainha ♛ ♕ : ");
scanf("%d", &n3);

do{
    printf("⭠ Esquerda ");
    c3++;    
}while (c3 <= n3);

}