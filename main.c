#include <stdio.h>

int main(void) {
  int op;
 do{
    printf("1.  Ingresar  persona\n");
    printf("2.  Buscar persona por Nombre\n");
    printf("3.  Buscar persona por Rut\n");
    printf("4.  Exit\n");
    printf("Escoger opcion correspondiente: ");
    scanf("%i", &op);

    if((op > 4) || (op < 1)){
      printf("___________________________________\n\n");
      printf("*Numero invalido, intente nuevamente*\n");
    }

  }while((op > 4) || (op < 1));

  switch(op){

    case 1:
    printf("OLa lo pibe");
    break;
    case 2:




    case 3:



    case 4:
    break;
  }
}