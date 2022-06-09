#include <stdio.h>

int main(){
	{
		
    int B,s,l,m;
    char C;
		
		
		do{
			printf("\nInserte el caracter que quiere utilizar: ");
			scanf("%c", &C);
		    printf("\nIngresa el tamano de la base: ");
		    scanf("%i", &B);
		
		
		for (l=1; l<=B; l++){
		    for (m=0; m<l; m++){
	            printf("%c", C);
	        		}
	        printf("\n");
	               	}
		
		printf("\n\nDesea imprimir otro triangulo?");
			printf("\n 1. Si");
			printf("\n 2. No");
			printf("\nIntroduzca su opcion 1 o 2: ");
			scanf("%i", &s);
		
		
		
		
		
		
		
		}while(s==1 || s==0);

		return 0;
		
		
	}
}
