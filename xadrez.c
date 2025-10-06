// movimentação do jogo de xadrez nivel mestre.
#include <stdio.h>


void moverTorre (int casasTorre) {          //recursividade chamando função 
     if (casasTorre >0)
     {
        printf ("Direita\n");
        moverTorre (casasTorre - 1);
     }
     
}
void moverBispo (int casasBispo) {          //recursividade: Função do movimento do Bispo, loop mais externo para o movimento certical e loop interno para o movimento horizontal
    
    while (casasBispo > 0)      //movimento vertical
    {
        printf ("Cima e ");       //printa uma vez o vertical
        for (int i = 0; i < 1; i++)
        {
            printf("esquerda\n");  //Printa apenas uma vez o horizontal
        }

        casasBispo--;
    }
}
void moverRainha (int casasRainha)      //Função de movimentação da Rainha que será chamanda na main, essa função utiliza-se do-while
{
     do
  {
    printf("esquerda\n");
    casasRainha --;
    } while (casasRainha > 0);

}


void moverCavalo ( int casasCavalo)
{
    
     while ((casasCavalo > 0) )                      //testa a variável  apenas uma vez
        for (int i = casasCavalo; i < 3; i++)       //relaciona ao parametro da função com o contador do loop for que é sempre duas vez,enquanto que o loop externo ´´e apenas uma vez
        {
           printf ("Cima \n");    
           
        }
        printf("Direita");
        break;                                      //para o loop ára que rode apenas uma vez
       
    }
       
}
    

int main ()
{
    

// torre se move 5 vezes para a direita usando a recursividade de uma função criada anterio a main.

    printf("\n");
    printf("Movimento da torre:\n");
    moverTorre (5);
    printf("\n");

// Bispo se move 5 vezes para cima e para direita (diagonal).Usando a recursividade de uma função criada anterior a main.
    printf("Movimento do Bispo:\n");
    moverBispo(5);       //adiciona o parmetro para a função moverBispo
    printf("\n");


// Rainha se move 8 vezes para esquerda.
    printf("Movimento do Rainha:\n");
    moverRainha (8);
    printf("\n");

// Cavalo se move em  L, duas vezes para cima e uma vez para direita .
   printf("Movimento do Cavalo:\n");
   moverCavalo (1);
    printf("\n");
        return 0;
}