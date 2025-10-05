// movimentação do jogo de xadrez nivel aventureiro, adição do cavalo 
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

    // Cavala se move em  L, duas vezes para baixo e uma vez para esquerda .
    printf("Movimento do Cavalo:\n");

    int movimentoCavalo = 1;        //Cria-se uma variável conhecida como flag, basicamente um true ou false
    while (movimentoCavalo--)       //Decrementa a variável de 1 pra zero a fim de que o while só rode uma vez
    {
        for (int c=0; c<2; c++)
        {
            printf ("Cima \n");

        }
        printf("Esquerda");
    }
    
    


    return 0;
}