#include<stdio.h> 

int main () {
  double price[] = {5.0, 10.0, 15.0, 25.0, 20.0}; 
  int i; 
  
printf("%d bytes\n", sizeof(price)); 

  for(i=0; i < sizeof(price)/sizeof(price[0]); i++){
    	printf("%.0lf\n", price[i]);   
    }
return  0; 
}