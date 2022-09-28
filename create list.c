struct node * create_list(int n ){
    int number,i=0;
    struct node * new_node;
    printf("\ngive me the number ");
    scanf("%d",&number);
    while ((i<n)&&(number>0)){
        new_node=(struct node *)malloc(sizeof(struct node));
        (*new_node).value=number;
        if (head==NULL){
            (*new_node).next=new_node;
            head=new_node;
        }else{
            (*new_node).next=(*head).next;
            (*head).next=new_node;
            head=new_node;
        }
        i++;
        printf("\ngive me the number ");
        scanf("%d",&number);

    }
    return (*new_node).next;
}