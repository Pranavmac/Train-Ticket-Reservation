#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
typedef struct node
{
  int seat;
  char name[15];
  int age;
  char sex;
  struct node* next;
}list,*ptr;
 
void login();
void delete(ptr a);
void add(ptr a);
void printseat(ptr temp);
void print(ptr a);
void delete(ptr a);
 
int main()
{
  int i,input;
  ptr a;
  clrscr();
  a=(ptr)malloc(1*sizeof(list));             // dummy node 
  a->next=NULL;
  a->seat=0;
    printf("\t\t=================================================\n");
  printf("\t\t|                                               |\n");
  printf("\t\t|        -----------------------------          |\n");
  printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
  printf("\t\t|        -----------------------------          |\n");
  printf("\t\t|                                               |\n");
  printf("\t\t|                                               |\n");
  printf("\t\t|                                               |\n");
  printf("\t\t|                  DONE BY                      |\n");
  printf("\t\t|                    I-IT                        |\n");
  printf("\t\t|                                               |\n");
  printf("\t\t=================================================\n\n\n");
 
  printf(" \n Press any key to continue:");
 
  getch();
  clrscr();
  login();
  
  for(i=0;i<100;i++)
  {
      clrscr();
      printf("\nenter\n========================================\n 1 to book a ticket \n========================================\n 2 for deleting a TICKET \n========================================\n 3 to print the chart \n========================================\n 4 to exit \n========================================\n \n");
      scanf("%d",&input);
      if(input==1)
      {
          add(a);
      }
      else if(input==2)
      {
          delete(a);
      }
      else if(input==3)
      {
           print(a);
      }
      else if(input==4)
      {
          break;
      }
      else
      {
            printf("not able to recognise the command \n");
      }
   }
  printf("thank you \n");
  return 0;
}
 
void login()
{
    int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    do
    {
 
  printf("\n  =======================  LOGIN FORM  =======================\n  ");
  printf(" \n                       ENTER USERNAME:-");
  scanf("%s", &uname);
  printf(" \n                       ENTER PASSWORD:-");
  while(i<10)
  {
      pword[i]=getch();
      c=pword[i];
      if(c==13) break;
      else printf("*");
      i++;
  }
  pword[i]='\0';
  i=0;
  if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
  {
    printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
    printf("\n\n\n\t\t\t\tPress any key to continue...");
    getch();
    break;
  }
  else
  {
    printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
    a++;
    getch();
    clrscr();
  }
    }while(a<=4);
   if(a==4)
   {
  printf("You have tried more than 4 times!!!");
  exit(0);
   }
}
 
void add(ptr a)
{
  int input,input2;
  ptr temp=NULL;
  while(a->next!=NULL)
    {
      a=a->next;
    }
  if(a->seat>70)
    {
      printf("train full \n");
      return ;
    }
  else if(a->seat>50)
    {
      printf("%d waiting awailable \n",(a->seat)-50);
      printf("enter 1 to exit 0 to continue ");
      scanf("%d",&input2);
      if(input2==1)
 {
   return ;
 }
    }
  temp=(ptr)malloc(1*sizeof(
list)); 
  temp->next=NULL;
  printf("enter name ");
  scanf("%s",temp->name);
  printf("enter age ");
  scanf("%d",&temp->age);
  printf("enter sex ");
  scanf("%s",&temp->sex);
  temp->seat=(a->seat)+1;
  printf("enter 1 to print the ticket 0 for ot to print the ticket \n");
  scanf("%d",&input);
  if(input==1)
    {   
      printseat(temp);
    }
  a->next=temp;
  getch();
  return ;
}
 
void printseat(ptr temp)
{
  if(temp->seat>50)
    {
      printf("WL=%d",(temp->seat)-
50); 
    }
  else
    {
      printf("confirm seat=%d",temp->seat);
    }
  printf(" name=%s ",temp->name);
  printf("sex=%c ",temp->sex);
  printf("age=%d \n",temp->age);
  getch();
  return ;
}
 
void print(ptr a)
{
  a=a->next;
  while(a!=NULL)
    {
      printf("seat number=%d,name=%s ,age=%d,sex=%c \n",a->seat,a->name,a->age,a->
sex); 
      a=a->next;
    }
    getch();
  return ;
}
 
void delete(ptr a)
{
  int input;
  ptr temp;
  a=a->next;
  printf("enter the seat number ");
  scanf("%d",&input);
  while(a!=NULL&&(a->seat)!=
input) 
    {
      a=a->next;
    }
  if(a==NULL)
    {
      printf("can not delete \n");
      return ;    
    }
  temp=a;
  a=a->next;
  free(temp);
  while(a!=NULL)
    {
      a->seat=a->seat-1;
      a=a->next;
    }
  printf("seat deleted \n");
  getch();
  return ;
}
