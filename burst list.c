void ecalter(struct node * head,struct node ** inf_head,struct node ** sup_head , int x ){
    struct node * sup_node;
    struct node * inf_node;
    while (head!=NULL){
        if ((*head).value>=x){
            sup_node=(struct node* )malloc(sizeof(struct node));
            (*sup_node).value=(*head).value;
            (*sup_node).next=*sup_head;
            *sup_head=sup_node;
        }else{
            inf_node=(struct node* )malloc(sizeof(struct node));
            (*inf_node).value=(*head).value;
            (*inf_node).next=*inf_head;
            *inf_head=inf_node;
        }
        head=(*head).next;
    }
}