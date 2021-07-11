#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

typedef struct Node Node;


struct Node {
    p * data;
    Node * next;
    Node * prev;
};

struct List {
    Node * head;
    Node * tail;
    Node * current;
};

typedef p p;


Node * createNode(p * data) {
    Node * new = (Node *)malloc(sizeof(Node));
    assert(new != NULL);
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    return new;
}

List * createList() {
  List * lista = (List *) malloc(sizeof(List));
  assert(lista != NULL);
     return lista;
}
void * firstList(List * list) {
  if(list->head==NULL){ //validacion de el primer elemento de la lista
      return NULL;
  }else{
  list->current=list->head; //asignar el valor head al current
  return (void *)list->current->data;
  }
}

void * nextList(List * list) {
  if(list->current && list->current->next!=NULL){
    list->current=list->current->next;
  }else{
    return NULL;
  }
   return (void*)list->current->data;
}

void * lastList(List * list) {
  if(list->tail==NULL){
    return NULL;
  }else{
    list->current=list->tail;
    return (void *)list->current->data;
  }
}

void * prevList(List * list) {
    if(list->current && list->current->prev!=NULL){
      list->current=list->current->prev;
    }else{
    return NULL;
    }
     return (void *)list->current->data;
}

void pushFront(List * list, p * data) {
   Node* nuevoNodo = createNode(data);
   nuevoNodo->next = list->head;
   list->head=nuevoNodo;
   if(list->tail != NULL){
     nuevoNodo->next->prev=nuevoNodo;
   }else{
     list->tail=nuevoNodo;
   }
   //if(list->head){
    //list->head->prev=nuevoNodo;
   //}
   
   nuevoNodo->prev=NULL;

}

void pushBack(List * list, p * data) {
    list->current = list->tail;
    pushCurrent(list,data);
}

void pushCurrent(List * list, p * data) {
  Node* nodoA = createNode(data);
  nodoA->next = list->current;
  list->current=nodoA;
  if(list->current != NULL){
    nodoA->next->prev=nodoA;
  }else{
    list->tail=nodoA;
  }
  nodoA->prev=NULL;
}

void * popFront(List * list) {
    list->current = list->head;
    return popCurrent(list);
}

void * popBack(List * list) {
    list->current = list->tail;
    return popCurrent(list);
}

void * popCurrent(List * list) {
  
    return NULL;
}

void cleanList(List * list) {
    while (list->head != NULL) {
        popFront(list);
    }
}