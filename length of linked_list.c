int length(struct node * head){
    int nb;
    struct node * new_head=head;
    while (1){
        nb++;
        new_head=(*new_head).next;
        if (head==new_head){
            break;
        }
    }
    return nb;
}