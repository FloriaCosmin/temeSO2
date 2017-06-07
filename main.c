#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define BSIZE 2048
struct mdata
{
    char name[255];
    FILE *fp;
    int size;
    int nsize;
    int csize;
    struct mdata *next;
};
struct mdata *mhead=NULL,*current=NULL;

 int getsize(FILE *fp)
 {
     int size=0;
     fseek(fp,0L,SEEK_END);
     size=ftell(fp);
     fseek(fp,0L,SEEK_SET);
     return size;
 }
 int add(char *nume)
 {
     FILE *fp;
     char ntemp[255];
     char name;
     char nhead;
     struct mdata *newm;
     newm=(struct mdata *)malloc(sizeof(struct mdata));
    strcpy(newn->name,name);
    fp=fopen(name,"r+");
     newm->fp=fp;
     newm->size=getsize(fp);
    newm->csize=strlen(name);
     sprintf(ntemp,"%d",newm->size);
     newm->next=NULL;
     printf("\n",name);
    if(nhead==NULL)
     {

        nhead=newm;
         current=newm;
     }
 }


