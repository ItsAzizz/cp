void display(struct node *head){
    printf("\nnode.value = %d",(*head).value);
    struct node * new_head=(*head).next;
    int i = 0 ;
    while (i<2){
        while (1){
            printf("\nnode.value = %d",(*new_head).value);
            new_head=(*new_head).next;
            if (new_head==head){
                break ;
            }
    }
        i++;
    }
}