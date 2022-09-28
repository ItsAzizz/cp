#include <stdio.h>
#include <stdlib.h>
struct node{
    int value ;
    struct node * next ;
    struct node * prev ;
};
void create(struct node ** head ) {
    *head=(struct node * )malloc(sizeof(struct node ));
    printf("\ngive me the head value : ");
    scanf("%d",&(**head).value);
    (**head).next=NULL;
}
void ajout (struct node * new_node ,struct node ** next_node,int x ){
    (**next_node).prev=new_node;
    (*new_node).next=*next_node;
    (*new_node).value=x;
    (*new_node).prev=NULL;
    *next_node=new_node;
}
void display(struct node * head){
    while (head!=NULL){
        printf("\nnode.value = %d",(*head).value );
        head=(*head).next;
    }
}
struct node * search(struct node * head,int x ){
    while (head!=NULL){
        if ((*head).value==x){
            return head;
        }
        head=(*head).next;
    }
    return NULL;
};
void insert(struct node * head ,int bef , int x ){
    while(head!=NULL){
        if (head->value==bef){
            struct node * new_node=(struct node * )malloc(sizeof(struct node));
            new_node->value=x;
            new_node->prev=head;
            new_node->next=head->next;
            head->next=new_node;
            return ;
        }
        head=head->next;
    }
    printf("\n%d does not exist . ",bef);
}
void ajout_queue(struct node * head){
    struct node * the_node= head;
    while (the_node->next!=NULL){
        the_node=the_node->next;
    }
    int x ;
    printf("\ngive me a number : ");
    scanf("%d",x );
    insert(head,the_node->value,x);
}
void delete_node(struct node ** head,int x){
    struct node * the_node=search(*head,x);
    printf("\nthe_node = %p",the_node);
    printf("\nthe_node.value = %d",the_node->value);
    if (the_node ==*head){
        the_node->next->prev=the_node->prev;
        *head=(**head).next;
    }else if (the_node->next==NULL){
        the_node->prev->next=the_node->next;
    }else {
        the_node->prev->next=the_node->next;
        the_node->next->prev=the_node->prev;
    }

}
void delete_queue(struct node * head){
    struct node * the_node= head;
    while (the_node->next!=NULL){
        the_node=the_node->next;
    }
    the_node->prev->next=the_node->next;
}
void delete_all (struct node ** head){
    struct node * the_node=*head ;
    while(*head!=NULL){
        *head=(**head).next;
        free(the_node);
        the_node=*head;
    }
}
int main()
{
    int number ;
    struct node * head;
    struct node * new_node;
    create(&head);
    struct node * next_node=head;
    printf("give me a number : ");
    scanf("%d",&number);
    while (number>0){
        new_node=(struct node * )malloc(sizeof(struct node ));
        ajout(new_node,&next_node,number);
        head=new_node;
        printf("new_node = %p",new_node);
        printf("\ngive me a number : ");
        scanf("%d",&number);
    }
    display(head);
    delete_all(&head);
    printf("\n new array here : \n ");
    display(head);
    printf("head= %p",head);
}
