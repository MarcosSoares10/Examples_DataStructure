#include <stdio.h> 

int main() { 
 int n,       
       i, main = 1, before = 0, auxiliar; 

 printf("Type value of n:\n"); 
 scanf("%d", &n); 
 
 printf("\nfibonacci of %10d = %10d", 0, 0); 
 printf("\nfibonacci of %10d = %10d", 1, 1); 
  
 for (i = 2; i <= n ; i++) { 
             auxiliar = main; 
             main = main + before; 
             before = auxiliar; 
             printf("\nfibonacci de %10d = %10d", i, main); 
  }
  printf("\n");
  system("pause");
  return 0; 
} 
