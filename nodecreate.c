
struct record
{
 int data;
 struct record *link;
}*newnode=NULL,*head=NULL,*temp=NULL,*prev=NULL;
typedef struct record NODE;

void createnode()
{
     newnode=(NODE *)malloc(sizeof(NODE));
     printf("Alloted memory address=%u\n",newnode);
     printf("Enter the element to insert:");
     scanf("%d",&newnode->data);
     newnode->link=NULL;
}
