#include<stdio.h>
void selection_sort(int num[], int tam) 
{ 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
   {
    min = i;
    for (j = (i+1); j < tam; j++) {
      if(num[j] < num[min]) {
        min = j;
      }
    }
    if (i != min) {
      aux = num[i];
      num[i] = num[min];
      num[min] = aux;
    }
  }
}



int main(){
int vector[10];
int i;

for(i=0;i<10;i++){
	printf("Type the numbers\n");
	scanf("%d",&vector[i]);
}

printf("\nVector before: (");

for(i=0;i<10;i++)
printf("%d, ",vector[i]);
printf(")");
selection_sort(vector,10);
printf("\n\nVector after: (");

for(i=0;i<10;i++)
printf("%d, ",vector[i]);
printf(")\n");

system("pause");
return 0;
}

