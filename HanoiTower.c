#include <stdio.h>
#include <stdlib.h>
    
    void hanoi(int n, char a, char b, char c)
    {
      if (n == 1)
        printf("Change disc %d from %c to %c\n", n, a, b);
     else
    {
       hanoi(n - 1, a, c, b);                            
       printf("Change disc %d from %c to %c\n", n, a, b);
       hanoi(n - 1, c, b, a);                            
     }
   }
   
   
   int main(void)
   {
     int numDiscs;
     printf("Type the number of discs:  ");
     scanf("%d", &numDiscs);
     hanoi(numDiscs, 'A', 'B', 'C');
     system("pause");
     return 0;
   }
