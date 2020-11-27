#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pasien{

    int date,year;
    char month[20],name[255];
    Pasien *next,*prev,curr;
} *head = NULL,*tail = NULL,*curr = NULL;

