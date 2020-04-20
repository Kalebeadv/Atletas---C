#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tempo 400
#define numero_de_participantes 280

void determina_o_tempo_de_cada_participante( float tempo_dos_participantes[]);
void determina_a_colocacao_dos_participantes(int participantes[], float tempo_dos_particiantes[]);

   
int main()
{
  int participantes[280];
  float tempo_dos_participantes[280];
  determina_o_tempo_de_cada_participante(tempo_dos_participantes);
  
  determina_a_colocacao_dos_participantes(participantes,tempo_dos_participantes);
 
}

void determina_o_tempo_de_cada_participante( float tempo_dos_participantes[])
{
  float j;
  for(int i = 0; i < 280; i++)
  {
    j = i+1;
    tempo_dos_participantes[i] = j;
  }
}

void determina_a_colocacao_dos_participantes(int participantes[], float tempo_dos_particiantes[])
{
 for(int i = 0; i < 280; i++)
 {
   printf("posticao: [%d] tempo: %.2f\n", i,tempo_dos_particiantes[i]);
   

 } 
}
