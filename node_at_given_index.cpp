int GetNth(struct node* head, int index){
  // Code here
  int count=1;
  node *temp=head;
  while(temp!=NULL)
  {
      if(count==index)
      return temp->data;
      else
      {
          count++;
          temp=temp->next;
      }
  }
}
