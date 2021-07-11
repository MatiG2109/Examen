#include <stdio.h>
#include "list.h"

typedef struct p{

  char nombre[20];
  char rut[11];
  int edad;

}p;

int main(void) {
  List * lista = createList();
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
    scanf("%s", aux1->rut);
    printf("\nIngrese Edad : ");
    scanf("%i", &aux1->edad);


    aux2=firstList(lista);
    if(aux2 == NULL){
        pushFront(lista, aux1);
      }else{
        while(aux3!=NULL){
          if(aux1->edad >= aux3->edad){
            aux3=nextList(lista);
        }else{
          if(nextList(lista) != NULL){
              aux1 = nextList(lista);
              pushCurrent(lista, aux1);
              aux3 = aux1;
            }
        }
        }
      }

    break;
    case 2:




    case 3:



    case 4:
    break;
  }
}