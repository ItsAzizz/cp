void insert_first(struct node ** head,int x){
    struct node * last_node=*head;
    struct node * new_node=(struct node * )malloc(sizeof(struct node));
    (*new_node).value=x;
    while ((*last_node).next!=*head){
        last_node=(*last_node).next;
    }
    (*last_node).next=new_node;
    (*new_node).next=*head;
    *head=new_node;
}