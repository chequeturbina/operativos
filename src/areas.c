
/* Meza Martinez Emmanuel
   No. Cuenta: 311309649*/
   
#include "areas.h"

float circulo(float radio){
	
	return cir(radio);
}

float triangulo(float base, float altura){
	
	return tri(base,altura);
}

float cuadrado(float lado){
	
	return cua(lado);
}

float rectangulo(float base, float altura){
	
	return rec(base,altura);
}

int main (int argc, char ** argv){	
	
	if(argc > 4 && argc < 3){
		
			printf("Error en los argumentos\n");
			printf("Las opciones son:\n");
			printf("Circulo: -c <radio>\n");
			printf("Cuadrado: -dc <lado>\n");
			printf("Triangulo: -t <base> <altura>\n");
			printf("Rectangulo: -dr <base> <altura>\n");
		
	} else if (argc == 3){
		
		if(strcmp(argv[1], "-c") == 0){
			
			printf("El area del circulo es: %f \n", circulo(atoi(argv[2])));
		
		} else if (strcmp(argv[1], "-dc") == 0){
			
			printf("El area del cuadrado es: %f \n", cuadrado(atoi(argv[2])));
			
		} else{
			
			printf("Error en los argumentos\n");
			printf("Las opciones son:\n");
			printf("Circulo: -c <radio>\n");
			printf("Cuadrado: -dc <lado>\n");
			printf("Triangulo: -t <base> <altura>\n");
			printf("Rectangulo: -dr <base> <altura>\n");			
		}
		
	} else if (argc == 4){
		
		if(strcmp(argv[1], "-t") == 0){
			
			printf("El area del triangulo es: %f \n", triangulo(atoi(argv[2]), atoi(argv[3])));
			
		} else if (strcmp(argv[1], "-dr") == 0){
			
		
			printf("El area del rectangulo es: %f \n", rectangulo(atoi(argv[2]), atoi(argv[3])));
			
		} else {
			
			printf("Error en los argumentos\n");
			printf("Las opciones son:\n");
			printf("Circulo: -c <radio>\n");
			printf("Cuadrado: -dc <lado>\n");
			printf("Triangulo: -t <base> <altura>\n");
			printf("Rectangulo: -dr <base> <altura>\n");
			
		}
	}
	   
}
