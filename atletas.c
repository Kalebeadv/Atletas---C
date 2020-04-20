#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void determina_o_tempo_de_cada_participante( int classificacao[281][1]);
void exibe_o_tempo_dos_tres_primeiros_colocados(int classificacao[281][1]);

   
int main()
{

  int classificacao[281][1];
  determina_o_tempo_de_cada_participante(classificacao);
  exibe_o_tempo_dos_tres_primeiros_colocados(classificacao);
  
 
}

void determina_o_tempo_de_cada_participante( int classificacao[281][1])
{
  int x;
  for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
     x = i*3;
     classificacao[i][j] = i*3 ;
   }
  }
}

void exibe_o_tempo_dos_tres_primeiros_colocados(int classificacao[281][1])
{
  printf("\n------------------------------\n");
  for(int i = 1; i < 4; i++)
  {
   for(int j = 0; j < 1; j++)
   {
     printf("COLOCACAO: [%d]   TEMPO: %d\n", i, classificacao[i][j]);
   }
  }
  printf("\n------------------------------\n");
}
