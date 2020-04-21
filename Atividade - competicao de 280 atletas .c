#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void determina_o_tempo_de_cada_participante( int classificacao[281][1]);
void exibe_o_tempo_dos_tres_primeiros_colocados(int classificacao[281][1]);
int exibe_a_media_dos_8_primeiros_colocados(int classificacao[281][1]);
void exibe_o_percentual_de_atletas_ACIMA_da_media(int classificacao[281][1],int media);
void exibe_o_percentual_de_atletas_ABAIXO_da_media(int classificacao[281][1],int media);
void exibe_atletas_com_o_tempo_de_ate_135_minutos(int classificacao[281][1]);
void exibe_o_pior_tempo_da_competicao(int classificacao[281][1]);

   
int main()
{

  int classificacao[281][1];
  determina_o_tempo_de_cada_participante(classificacao);
  exibe_o_tempo_dos_tres_primeiros_colocados(classificacao);
  float media = exibe_a_media_dos_8_primeiros_colocados(classificacao);
  exibe_o_percentual_de_atletas_ACIMA_da_media(classificacao,media);
  exibe_o_percentual_de_atletas_ABAIXO_da_media(classificacao,media);
  exibe_atletas_com_o_tempo_de_ate_135_minutos(classificacao);
  exibe_o_pior_tempo_da_competicao(classificacao);
 
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
  printf("Os 3 primeiros colocados\n\n");
  for(int i = 1; i < 4; i++)
  {
   for(int j = 0; j < 1; j++)
   {
     printf("COLOCACAO: [%d]   TEMPO: %d minutos\n", i, classificacao[i][j]);
   }
  }
  printf("\n------------------------------\n");
}

int exibe_a_media_dos_8_primeiros_colocados(int classificacao[281][1])
{
   printf("\n------------------------------\n");
   printf("A media dos 8 primeiros colocados\n\n");
   float media_dos_8_colocados = 0;
   for(int i = 1; i < 9; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    
    if(i < 8) media_dos_8_colocados += classificacao[i][j];
    else if(i == 8) media_dos_8_colocados = (media_dos_8_colocados+ classificacao[i][j])/8;
    printf("%d Posicao, tempo: %d minutos\n",i, classificacao[i][j]);
   }
  }

  printf("\nA media do tempo dos 8 primeiros colocados: %.2f\n", media_dos_8_colocados);
  printf("\n------------------------------\n");
  return media_dos_8_colocados;
}

void exibe_o_percentual_de_atletas_ACIMA_da_media(int classificacao[281][1],int media)
{
  printf("\n------------------------------\n");
  printf("Atletas com o tempo ACIMA da media\n\n");
  for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    if(classificacao[i][j] > media) printf("%d posicao, tempo: %d minutos\n", i, classificacao[i][j]);
   }
  }
}

void exibe_o_percentual_de_atletas_ABAIXO_da_media(int classificacao[281][1],int media)
{
  printf("\n------------------------------\n");
  printf("Atletas com o tempo ABAIXO da media\n\n");
  for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    if(classificacao[i][j] < media) printf("%d posicao, tempo: %d minutos\n", i, classificacao[i][j]);
   }
  }
  printf("\n------------------------------\n");
}

void exibe_atletas_com_o_tempo_de_ate_135_minutos(int classificacao[281][1])
{
  printf("\n------------------------------\n");
  printf("Atletas que tiveram o tempo de classificacao para participar\n");
  printf("da competicao de travessia da baia do marejo\n\n");
   for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    
    if(classificacao[i][j] <= 135) printf("%d atleta, tempo: %d minutos\n", i, classificacao[i][j]); 
  
   }
  }
  printf("\n------------------------------\n");
}

void exibe_o_pior_tempo_da_competicao(int classificacao[281][1])
{
  printf("\n------------------------------\n");
  printf("Atleta com a pior classificacao\n\n");
   for(int i = 1; i < 281; i++)
  {
   for(int j = 0; j < 1; j++)
   {
    if(i == 280) printf("%d atleta, tempo: %d minutos\n", i, classificacao[i][j]); 
   }
  }
  printf("\n------------------------------\n");
  printf("\n------------------------------");
}
