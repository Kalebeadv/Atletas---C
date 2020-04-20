#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void determina_o_tempo_de_cada_participante( int classificacao[281][1]);
void exibe_o_tempo_dos_tres_primeiros_colocados(int classificacao[281][1]);
int exibe_a_media_dos_8_primeiros_colocados(int classificacao[281][1]);

   
int main()
{

  int classificacao[281][1];
  determina_o_tempo_de_cada_participante(classificacao);
  exibe_o_tempo_dos_tres_primeiros_colocados(classificacao);
 float media = exibe_a_media_dos_8_primeiros_colocados(classificacao);
  
 
}

void determina_o_tempo_de_cada_participante( int classificacao[281][1])
{

  for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    
     classificacao[i][j] = i*3;
  
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

int exibe_a_media_dos_8_primeiros_colocados(int classificacao[281][1])
{
   printf("\n------------------------------\n");
   float media_dos_8_colocados = 0;
   for(int i = 1; i < 9; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    
    if(i < 8) media_dos_8_colocados += classificacao[i][j];
    else if(i == 8) media_dos_8_colocados = (media_dos_8_colocados+ classificacao[i][j])/8;
    printf("%d Posicao, tempo: %d\n",i, classificacao[i][j]);
   }
  }

  printf("\nA media do tempo dos 8 primeiros colocados: %.2f\n", media_dos_8_colocados);
  printf("\n------------------------------\n");
  return media_dos_8_colocados;
}

void exibe_o_percentual_de_atletas_acima_da_media
