#include <stdio.h>

typedef struct persona{

  char nombre[20];
  char rut[11];
  int edad;

}p;

int main(void) {
  int op;
  p * aux1;
  p * aux2;
  p * aux3;
 do{
    printf("1.  Ingresar  persona\n");
    printf("2.  Buscar persona por Nombre\n");
    printf("3.  Buscar persona por Rut\n");
    printf("4.  Exit\n");
    printf("Escoger una opcion: ");
    scanf("%i", &op);

    if((op > 4) || (op < 1)){
      printf("___________________________________\n\n");
      printf("*Numero invalido, intente nuevamente*\n");
    }

  }while((op > 4) || (op < 1));

  switch(op){

    case 1:
    printf("Ingrese Nombre: \n");
    scanf("%s", aux1->nombre);
    printf("Ingrese RUT: \n");
    scanf("%s", aux2->rut);
    printf("\nIngrese Edad : ");
    scanf("%i", &aux3->edad);
    break;
    case 2:




    case 3:



    case 4:
    break;
  }
}