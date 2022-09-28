void delete_ele(struct node ** head, int x ){

    if ((**head).score==x){
        *head=(**head).next;
        return ;
    }
    struct node * the_node = *head;
    while (the_node!=NULL){
        if ((*(*the_node).next).score==x){
            (*the_node).next=(*(*the_node).next).next;
            return ;
        }
        the_node=(*the_node).next;
    }
}