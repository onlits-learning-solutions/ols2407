#include <stdio.h>
#include <string.h>

#define MAX 100

// -------------- common.c --------------
void printline(int n);
void messagebox(char *message);
void title(char *title);
void display(int *arr, int size);

// ------------ insert.c -----------------
void insertmenu(int *arr, int *size);
void insertbeginning(int *arr, int *size);
void insertend(int *arr, int *size);
void insertindex(int *arr, int *size);
// ------------ search.c ------------------
void searchmenu(int *arr, int size);
void linearsearch(int *arr, int size);
void binarysearch(int *arr, int size);