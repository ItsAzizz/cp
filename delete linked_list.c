void delete_list(struct node ** head){
    struct node * next_node=*head;
    while (*head!=NULL){
        *head=next_node;
        next_node=(*next_node).next;
        *head=NULL;
    }
}*