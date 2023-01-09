#include <stdio.h>
int main () {
  printf("Gebe deine 10 Schulnoten ein: \n");
  float Note[10];
  int i; 
    for (i=0; i < 10; i++){
      scanf("%f", &Note [i]);
      
    }
  // Avg. berechnen: 
  float s =0; 
  for (i = 0; i < 10; i++){
      s+= Note[i];
    }
  printf("%f", s/10);

return 0; }
