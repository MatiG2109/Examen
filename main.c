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
  p * top;
 do{
    printf("1.  Ingresar  persona\n");
    printf("2.  Buscar persona por Nombre\n");
    printf("3.  Buscar persona por Rut\n");
    printf("Escoger una opcion: ");
    scanf("%i", &op);

    if((op > 3) || (op < 1)){
      printf("___________________________________\n\n");
      printf("*Numero invalido, intente nuevamente*\n");
    }

  }while((op > 3) || (op < 1));

  switch(op){

    case 1:

    printf("Ingrese RUT: \n");
    scanf("%s", aux1->rut);
    printf("Ingrese Nombre: \n");
    scanf("%s", aux1->nombre);
    printf("\nIngrese Edad : ");
    scanf("%i", &aux1->edad);
    aux2=firstList(lista);
    if(aux2 == NULL){
        pushFront(lista, aux1);
      }else{
        while(top!=NULL){
          if(aux1->edad >= top->edad){
            top=nextList(lista);
        }else{
          if(nextList(lista) != NULL){
              aux1 = nextList(lista);
              pushCurrent(lista, aux1);
              top = aux1;
            }
        }
        }
      }

    break;
    case 2:
    
    printf("Ingresar nombre a buscar: \n");
    char* nombre;
    scanf("\n%s", nombre);
    aux1 = firstList(lista);
    do{
      if(aux1->nombre==nombre){
        printf("Nombre \n");
        printf("%s\n", nombre);
        printf("Rut \n");
        printf("%s \n", aux1->rut);
        printf("Edad \n");
        printf("%i \n", aux1->edad);
      }
      aux1 = nextList(lista);
    }while(aux1!=NULL);
    break;
    case 3:
    printf("Ingresar nombre a buscar: \n");
    char* rut;
    scanf("\n%s", rut);
    aux1 = firstList(lista);
    do{
      if(aux1->rut==rut){
        printf("Nombre \n");
        printf("%s\n", aux1->nombre);
        printf("Rut \n");
        printf("%s \n", rut);
        printf("Edad \n");
        printf("%i \n", aux1->edad);
        

      }
      aux1 = nextList(lista);
    }while(aux1!=NULL);
    break;
  }
}