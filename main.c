#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int seg=time(0); // devolve na função time(0) o número de segundos passados desde janerio de 1970, e armazena na variável seg(segundos)
    srand(seg); // srand() faz : passa a seed (semente) que será um numero aleátorio de verdade armazenado na variável acima.
    
    int numRand = rand(); // rand() faz: devolve um número(grande) e randomico (pseudo-aleatório)
    int num= numRand%100; // calcula o resto da divisão do número acima por 100. o que sempre trará um número entre 0 e 99
    
    int chute=0;
    int acertou=0,qtde=1,maior=0;
    int venceu=0;
    float pontos=1000;
    printf(" -----------------------------------------\n");
    printf("|JOGO: acerte o número que estou pensando |\n");
    printf(" -----------------------------------------\n");
    
    while(1)
    {
        //qtde++;
        printf("Tentativa:[%d]\n",qtde);
        printf("->");
        scanf("%d",&chute);

        if(chute<0){
            printf("\tErro!Nº Menor do que zero\n");
            continue;
        }
        acertou=(chute==num);
        maior = chute > num;
        if(acertou)
        {
            printf("\nCongrats você é bom! Parece que eu perdi >:( !\n\n ");
            venceu=1;
            break;    
        }
        else{
            if (maior)
            {
                printf("Seu chute foi maior\n\n");
            }
            else{
                printf("Seu chute foi menor\n\n");
            }
            qtde++;
            float pontosperdidos= abs(chute-num)/2.0;  
            pontos= pontos-pontosperdidos;
        }
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", qtde);
    printf("Total de pontos feitos: %.2f\n", pontos);
}
