void insert_last(struct node * head,int x){
     struct node * new_node=(struct node * )malloc(sizeof(struct node));
     (*new_node).value=x;
     (*new_node).next=head;
     struct node * last_node=head;
     while ((*last_node).next!=head){
        last_node=(*last_node).next;
    }
    (*last_node).next=new_node;
}