void insert_mid(struct node ** head,int x ){
    struct node * the_node=*head;
    struct node * new_node=(struct node * )malloc(sizeof (struct node));
    (*new_node).value=x;
    while (the_node!=NULL){
        if ((*(**head).next).value>=x){
            (*new_node).next=*head;
            *head=new_node;
            return ;
        }else if (((*the_node).next==NULL)&&((*the_node).value<=x)){
            (*new_node).next=NULL;
            (*the_node).next=new_node;
            return ;
        }else if (((*the_node).value<=x)&&((*(*the_node).next).value>=x)){
            (*new_node).next=(*the_node).next;
            (*the_node).next=new_node;
            return ;
        }
        the_node=(*the_node).next;
    }
}