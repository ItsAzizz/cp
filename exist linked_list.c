int exist(struct node * head ,int x ){
    while (head!=NULL){
        if ((*head).score==x){
            return 1 ;
        }
        head=(*head).next;
    }return 0 ;
}