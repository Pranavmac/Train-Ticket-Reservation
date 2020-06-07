
void deletenode()
{
    int dele;
    if(head==NULL)
    printf("List is Empty\n");
    else
    {
     printf("Enter the element to delete:");
     scanf("%d",&dele);
     for(temp=head,prev=NULL;temp!=NULL;prev=temp,temp=temp->link) //traversal upto last node
     {
       if(temp->data==dele) //search data found
       {
	if(prev==NULL) //delete first node
	{
	head=head->link;
	free(temp);
	}
	else    //delete other than first
	{
	prev->link=temp->link;
	free(temp);
	}
       printf("Successfully Deleted\n");
       break;
       }
     } //end of traversal

     if(temp==NULL)
     printf("Element not found\n");
    }
}
