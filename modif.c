void modif(struct node * head,int x1, int x ){
    int e =0 ;
    while (head!=NULL){
        if ((*head).score==x1){
            (*head).score=x;
            e=1;
}
        head=(*head).next;
    }if (!e){
        printf("%d does not exist in list ",x1 );

    }
}