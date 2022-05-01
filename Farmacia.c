#include <stdio.h>

//Variables
char tipoDeProducto =('p'||'f'||'l');//p-Perfumeria| f-Farmacia| l-Limpieza
float bonificacion;
int cantidadProducto;
float precio;
float valorDeLaCompra;
float total;

//Procedimientos
void ingresarDatos();
void calcularDatos();
void imprimirTicket();

int main (){
	ingresarDatos();
	calcularDatos();
	imprimirTicket();
	
	return 0;
}

//Implementacion
void ingresarDatos(){
	printf("\t\t\t\t\tFarmacia Corrientes\n\n");
	printf("Ingrese por favor el tipo de producto que desea comprar: p-Perfumeria| f-Farmacia| l-Limpieza ");
	scanf(" %c",&tipoDeProducto);
	printf("Ingrese el precio del producto: ");
	scanf("%f",&precio);
	printf("Cuantos productos son: ");
	scanf("%d",&cantidadProducto);
}

void calcularDatos(){
            	valorDeLaCompra =(float)(cantidadProducto * precio);
	switch(tipoDeProducto){
		case 'P':
		case 'p': total = valorDeLaCompra* 0.95;
		          bonificacion = valorDeLaCompra- total;
			break;
			
		case 'F':
		case 'f': 
			       total = valorDeLaCompra* 0.90;
		           bonificacion = valorDeLaCompra- total;
			break;
			
		case  'L':
		case  'l': total = valorDeLaCompra* 0.85;
		           bonificacion = valorDeLaCompra- total;
			break;
			
	   	default: 
				   printf("Error producto incorrecto");
			break;
	   	
	}
}
void imprimirTicket(){
	
   printf("\nProducto de Limpieza\n");
   printf("Tipo de Producto: %c\n",tipoDeProducto);
   printf("Precio de la compra: $%.2f Pesos\n",valorDeLaCompra);
   printf("Con una Bonificacion de un 15%%\n");
   printf("Descuento por bonificacion: $%.2f Pesos\n\n",bonificacion);
   printf("**************************************************\n");
   printf("* El precio de su producto queda en: $%.2f Pesos *\n",total);
   printf("**************************************************\n");
   printf("\nGracias Por su Compra");
}
