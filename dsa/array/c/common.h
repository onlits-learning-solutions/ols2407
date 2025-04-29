#include <stdio.h>
#include <string.h>

#define MAX 100

// -------------- common.c --------------
void printline(int n);
void messagebox(char *message);
void title(char *title);
void display(int *arr, int size);
void swap(int *a, int *b);

// ------------ insert.c -----------------
void insertmenu(int *arr, int *size);
void insertbeginning(int *arr, int *size);
void insertend(int *arr, int *size);
void insertindex(int *arr, int *size);
// ------------ search.c ------------------
void searchmenu(int *arr, int size);
void linearsearch(int *arr, int size);
void binarysearch(int *arr, int size);

// ------------- sort.c -------------------
void sortmenu(int *arr, int size);
void selectionsort(int *arr, int size);
void bubblesort(int *arr, int size);