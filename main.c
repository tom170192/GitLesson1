#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char** argv)
{
  int nombreMystere = 0, nombreEntre = 0, coups = 0, diff=0;

  int MAX = 0, MIN = 0;

  printf("Choisissez votre difficulté entre 1 et 3\n");
  scanf("%d", &diff);

  switch(diff)
  {
    case 1:
        MIN = 1;
        MAX = 100;
        break;
    case 2:
        MIN = 1;
        MAX = 500;
        break;
    case 3:
        MIN = 1;
        MAX = 1000;
        break;
    default:
        break;
  }

  srand(time(NULL));
  nombreMystere = (rand()%(MAX-MIN+1)) + MIN;

  while(nombreEntre != nombreMystere)
  {
    printf("Entrez un nombre entre %d et %d \n", MIN, MAX);
    scanf("%d", &nombreEntre);
    if(nombreEntre > nombreMystere) printf("Trop Haut\n");
    if(nombreEntre < nombreMystere) printf("Trop bas \n");
    coups++;
  }
  printf("Bravo tu as gagné en %d coups! \n", coups);
}
