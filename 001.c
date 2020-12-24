 #include <stdio.h>
 #include <stdlib.h>
 
 
 int bubble_sort(int size,int vector[10]){
 	int i,j,aux;
 	for(i = size-1 ; i >= 1; i--) {  
 
     for( j=0; j < i ; j++) {
 
      if(vector[j]>vector[j+1]) {
 
        aux = vector[j];
        vector[j] = vector[j+1];
        vector[j+1] = aux;
 
        }
      }
    }
 }
 
int main(){
  	
  int vector[10];
  int size = 10;
  int i,r,a;

for(a=0; a<10; a++){
	printf("Type the numbers\n");
	scanf("%d",&vector[a]);
}

printf("\n");

bubble_sort(size,vector);
 
  
 
  for(r = 0; r < 10; ++r){
 
    printf("%d\n",vector[r]);
 }
 
 system("pause");
 return 0;
 
}

