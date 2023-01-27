#include<stdio.h>

int main (){
int i; float summe = 0; 
printf("10 Noten eingeben für AVG\n");
float noten[10];
  for(i = 0; i < 10; i++){
    scanf("%f", &noten[i]); 
  }
  for(i = 0; i < 10; i++){
  summe = summe + noten[i]; 
    }
   printf("%.1f", summe/10);
    
  return 0; 
 }