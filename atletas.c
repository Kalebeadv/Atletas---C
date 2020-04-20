#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void determina_o_tempo_de_cada_participante( int classificacao[281][1]);
//void determina_a_colocacao_dos_participantes(int participantes[], int tempo_dos_particiantes[]);

   
int main()
{

  int classificacao[281][1];
  determina_o_tempo_de_cada_participante(classificacao);
  
 // determina_a_colocacao_dos_participantes(participantes,tempo_dos_participantes);
 
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

/*void determina_a_colocacao_dos_participantes(int participantes[], int tempo_dos_particiantes[])
{
 for(int i = 0; i < 280; i++)
 {
   printf("posticao: [%d] tempo: %d\n", i,tempo_dos_particiantes[i]);
   

 } 
}
*/
