#include <stdio.h>
#include <string.h>
//guardar informações dos personagens
struct Personagem
{
   char nome[50];
   int vida;
   int iniciativa;
};

int main() {
   int numerojogadores;

   printf("Digite o numero de jogadores: ");
   scanf("%d", &numerojogadores);

   //criar uma lista de jogadores
   struct Personagem jogadores[numerojogadores];
   
   // coleta de informações dos personagens
   for (int i = 0; i < numerojogadores; i++) {
      printf("\nJogador %d: \n", i + 1);

      printf("Nome: ");
      scanf("%s", jogadores[i].nome);

      printf("Vida: ");
      scanf("%d", &jogadores[i].vida);

      printf("Iniciativa: ");
      scanf("%d", &jogadores[i].iniciativa);
   }
};