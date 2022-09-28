void delete_eles(struct node ** head, int x ){

    while ((**head).score==x){
        *head=(**head).next;
    }
    struct node * the_node = *head;
    while (the_node!=NULL){
        while ((*(*the_node).next).score==x){
            (*the_node).next=(*(*the_node).next).next;
            if ((*the_node).next==NULL){
                return;
            }
        }
        the_node=(*the_node).next;
}
}