// movimentação do jogo de xadrez nivel novato 
#include <stdio.h>

int main ()
{
    int i, b=0, r=0; //contaderes de bispo(b) , torre (i) e rainha (r)

// torre se move 5 vezes para a direita usando o laço for.


    printf("Movimento da torre:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
// Bispo se move 5 vezes para cima e para direita (diagonal).
    printf("Movimento do Bispo:\n");

    while (b < 5)
    {
        printf("cima e direita\n");
        b++;
    }
// Rainha se move 8 vezes para esquerda.
    printf("Movimento do Rainha:\n");
    do
    {
        printf("esquerda\n");
        r++;
    } while (r<8);
    


    return 0;
}
