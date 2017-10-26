#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int vector[6];
	int i,k,j,a;
	int aux, TAM=5;
		srand (time(NULL));
		printf("Vector antes de ser ordenado \n");
		printf("\n");
		for (int i=0;i<6;i++){
            vector[i]=rand()%100;
            
            printf("\t%d",vector[i]);
 		}
 		 printf("\n\n");
 		 
 		 for(k=0; k<6; k++){
		  
          for(j=k+1; j<6; j++){
		  
               if (vector[j] < vector[k]){
                aux = vector[j];
                vector[j] = vector[k];
                vector[k] = vector[j];
                vector[k]=aux;
               }
			}			
		}
			printf("Vector despues de ser ordenado \n");
			for(a=0; a<6; a++){
				printf("\t%d",vector[a]);
			}
		
	return 0;
}
