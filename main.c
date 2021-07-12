#include <stdio.h>
#include "list.h"

//Estructura p que almacena nombre, rut y la edad
typedef struct p{

  char nombre[20];
  char rut[10];
  int edad;

}p;

int main() {
  //Se crea una lista para así poder almacenar las personas
  List * lista = createList();
  int op;
  p * aux1;//Nueva Persona
  p * aux2;//Busqueda
  p * aux3;
  p * top; //Recorrido
 do{
    printf("Escoger una opcion: \n");
    printf("1.  Ingresar  persona\n");
    printf("2.  Buscar persona por Nombre\n");
    printf("3.  Buscar persona por Rut\n");
    
    scanf("%i", &op);

    if((op > 3) || (op < 1)){
      printf("___________________________________\n\n");
      printf("Intente nuevamente\n");
    }

  }while((op > 3) || (op < 1));

  switch(op){

    case 1:
    printf("\nIngrese Edad : ");
    scanf("%i", &aux1->edad);
    printf("Ingrese RUT con guión: \n");
    scanf("%s", aux1->rut);
    printf("Ingrese Nombre: \n");
    scanf("%s", aux1->nombre);

    //Se coloca el aux TOP en el comienzo de la lista
    top=firstList(lista);
   //Si no hay ningún elemento en la lista se ingresara aux1 (que contiene el nombre,rut y edad) al comienzo de la lista.
    if(top == NULL){
    pushFront(lista, aux1);
    }else{
    //Si se encuentra alguna persona en la lista, se deberan comparar ambas personas atraves de sus edades para asi poder ordenar por edades.
      while(top != NULL){
        //Al entrar al ciclo, este preguntara si la edad es mayor o igual al valor donde se encuentra, si es asi se avanza en la lista y se vuelve a preguntar hasta encontrar el sitio donde se guardara a la persona
        if(aux1->edad >= top->edad){
          top = nextList(lista);
        }else{
         if(nextList(lista) != NULL){
            pushCurrent(lista, aux1);
            top = nextList(lista);
          
         }else{
           //Si top llega a ser NULL, se ingresa la persona al final de la lista
            pushBack(lista, aux1);
           }
         }
       }
     }
  

    break;
    case 2:
    
    printf("Ingresar nombre a buscar: \n");
    char* nombre;
    scanf("\n%s", nombre);
    aux2 = firstList(lista);
    //Se utiliza un do para comparar el nombre buscado en todos los elementos de la lista
    do{
      if(aux2->nombre==nombre){
        printf("Nombre \n");
        printf("%s\n", nombre);
        printf("Rut \n");
        printf("%s \n", aux2->rut);
        printf("Edad \n");
        printf("%i \n", aux2->edad);
      }
      aux2 = nextList(lista);
    }while(aux2!=NULL);

    break;




    case 3:
    printf("Ingresar nombre a buscar: \n");
    char* rut;
    scanf("\n%s", rut);
    aux2 = firstList(lista);
    //Se utiliza la misma estructura que en la busqueda por nombre pero esta vez se comparara con el rut
    do{
      if(aux2->rut==rut){
        printf("Nombre \n");
        printf("%s\n", aux2->nombre);
        printf("Rut \n");
        printf("%s \n", rut);
        printf("Edad \n");
        printf("%i \n", aux2->edad);
        

      }
      aux2 = nextList(lista);
    }while(aux2!=NULL);
    break;
  }
}