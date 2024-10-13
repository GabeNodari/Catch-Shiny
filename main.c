#include <stdlib.h> 
#include <stdio.h>  
#include <time.h> 

int get_random(int min, int max) { 
  int random;
  random = (rand() % (max - min + 1) + min);
  return random;
} 

int get_result(int treinador, int shiny) {
  int result;
  result = (treinador + shiny);
  return result;
}

int main () {
  srand(time(NULL));

  int trainer = 1;
  int numberEncounter = 0;
  int encounter = get_random (1, 4096);

  do {
    encounter = get_random(1, 4096);
    numberEncounter++;
  } while (get_result(trainer, encounter) != 2);

  if ((get_result(trainer, encounter)) == 2) {
    printf("Congratualtions! Now you have a shiny Pokemon.\n");
    printf("Number of tries: %d.", numberEncounter);
  }
  return 0;
}