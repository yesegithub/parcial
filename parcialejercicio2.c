#include <stdio.h>

int main (){
	int dimencion=0;
	int inicio1=0;
	int inicio2=0;
	int suma1=0,suma2=0;
	int auxiliar=0;
	
	printf("ingrese la dimencion de la matriz.\n");
	scanf("%d",&dimencion);;
	
	int matriz[dimencion][dimencion];
	
	//proceso de llenado de la materiz
	for(inicio1=0;inicio1<dimencion;inicio1++){
		for(inicio2=0;inicio2<dimencion;inicio2++){
			printf("ingrese el valor en la  casilla %dx%d\n",inicio1,inicio2);
			scanf("%d",&matriz[inicio1][inicio2]);
		}
	}
	
	//imprimiendo la matriz.
	for(inicio1=0;inicio1<dimencion;inicio1++){
		for(inicio2=0;inicio2<dimencion;inicio2++){
			printf("\t%d",matriz[inicio1][inicio2]);
		}
		printf("\n");
	}
	
	
	for(inicio2=0;inicio2<dimencion;inicio2++){
			suma1+=matriz[0][inicio2];
	}
		
	for(inicio1=0;inicio1<dimencion;inicio1++){
		suma2=0;
		for(inicio2=0;inicio2<dimencion;inicio2++){
			suma2+=matriz[inicio1][inicio2];
		}
		if(suma1!=suma2){
		 auxiliar=1;
		}
	}
	
	
	for(inicio2=0;inicio2<dimencion;inicio2++){
		suma2=0;
		for(inicio1=0;inicio1<dimencion;inicio1++){
			suma2+=matriz[inicio1][inicio2];
			
		}
		if(suma1!=suma2){
				auxiliar=1;
			}
	}
	
	
	suma2=0;
	inicio2=dimencion;
	for(inicio1=0;inicio1<dimencion;inicio1++){
		suma2+=matriz[inicio1][inicio2-1];
		inicio2--;
	}
	if(suma1!=suma2){
		auxiliar=1;
	}
	
	inicio2=0;
	suma2=0;
	for(inicio1=0;inicio1<dimencion;inicio1++){
		suma2+=matriz[inicio1][inicio2];
		inicio2++;
	}
	if(suma1!=suma2){
		auxiliar=1;
	}
	
	if(auxiliar==0){
		printf("La matriz es amiga.\n");
	}else{
		printf("La matriz no es matriz amiga\n");
	}
	
	return 0;
	
}
