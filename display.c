void display()
{
     int count=0;
     if(head==NULL)
     printf("List is Empty\n");
     else
     {
     printf("List elements are...\n");
     for(temp=head;temp!=NULL;temp=temp->link)
     {
     ++count;
     printf("%d\t",temp->data);
     }
     printf("\nTotal No.of Elements:%d\n",count);
     }
