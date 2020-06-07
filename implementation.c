
void insertnode()  //Insert a node to linked list
{
     int option=0,pos=1,count;
     printf("Enter choice to insert:\n");
     printf("Enter 1 to Insert First\n2.Enter 2 to Insert Last\nPress any key to Insert at Position\n");
     scanf("%d",&option);
     createnode();

     if(head==NULL) 	 //When list is empty
	head=newnode;
     else if(option==2) 	//Insert a node at last
     {
       for(temp=head;temp->link!=NULL;temp=temp->link);   //Get last node as temp
       temp->link=newnode;
     }
     else		//Insert at first or anywhere
     {
       if(option!=1)
       {
       printf("Enter position to insert:");
       scanf("%d",&pos);
       }
//Get the previous node address in temp for a given position 
       for(temp=head,count=1;(temp->link!=NULL)&&(count<(pos-1));count++,temp=temp->link);
       if(temp!=head || pos==2)  //Insert other than first
	 {
	 newnode->link=temp->link;
	 temp->link=newnode;
	 }
       else         //Insert at first
	 {
	  newnode->link=temp;
	  head=newnode;
	 }
     }
     printf("Element %d inserted...\n",newnode->data);
}
