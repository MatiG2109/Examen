#ifndef List_h
#define List_h

typedef struct List List;

typedef struct p p;

List * createList(void);

void * firstList(List * list);

void * nextList(List * list);

void pushFront(List * list, p * data);

void pushBack(List * list, p * data);

void pushCurrent(List * list, p * data);





#endif /* List_h */


