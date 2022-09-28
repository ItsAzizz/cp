void reverse(struct node * head){
    struct node* last_node=NULL;
    struct node * the_node=head;
    struct node* first_node=head;
    while ((*the_node).next!=last_node){
            the_node=(*the_node).next;
        }
        last_node=the_node;
        printf("\nlast node = %d",(*last_node).score);
    while ((first_node!=last_node)&&((*first_node).next!=last_node)){
        swap(&(*first_node).score,&(*last_node).score);
        first_node=(*first_node).next;
        the_node=first_node;
        if (first_node==last_node){
            return ;
        }
        while ((*the_node).next!=last_node){
            the_node=(*the_node).next;
        }
        last_node=the_node;

    }
}