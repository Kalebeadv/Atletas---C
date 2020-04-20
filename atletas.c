#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void determina_o_tempo_de_cada_participante( int classificacao[281][1]);

   
int main()
{

  int classificacao[281][1];
  determina_o_tempo_de_cada_participante(classificacao);
  
 
}

void determina_o_tempo_de_cada_participante( int classificacao[281][1])
{
  
  for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
     classificacao[i][j] =  i;
     printf("posicao : [%d]   valor : %d\n", classificacao[i][j], i);
   }
  }
}

