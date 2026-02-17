#include <stdio.h> 
  
int main() { 
 int num, i, soma, j; 
  
 for (j = 0; j < 5; j++) { 
     printf("Digite um numero: "); 
     scanf("%d", &num); 
  
     if (num <= 1) { 
         printf("%d nao é um numero perfeito\n", num); 
         continue; 
     } 
  
     soma = 0; 
     for (i = 1; i < num; i++) { 
         if (num % i == 0) { 
             soma += i; 
         } 
     } 
  
     if (soma == num) { 
         printf("%d é um numero perfeito\n", num); 
     } else { 
         printf("%d nao é um numero perfeito\n", num); 
     } 
 } 
  
 return 0; 
}