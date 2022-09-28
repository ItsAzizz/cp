#include <stdio.h>
#include <stdlib.h>
struct node{
    int value;
    struct node * next;
};
struct node * create_list(int n ){
    int number,i=0;
    struct node * new_node;
    struct node * head=NULL;
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
void display(struct node *head){
    struct node * new_head=head;
    while (1){
        printf("\nnode.value = %d",(*new_head).value);
        new_head=(*new_head).next;
        if (new_head==head){
            break ;
        }
    }
}
/*/ length function here
int length(struct node * head){
    int nb=0;
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
//min is working ;
struct node * min(struct node * head){
    struct node * the_node=head;
    struct node * min_node=head;
    int min =(*head).value;
    while (1){
        if ((*the_node).value<min){
            min_node=the_node;
            min=(*the_node).value;
        }
        the_node=(*the_node).next;
        if (the_node==head){
            break;
        }
    }
    return min_node;
}
//
void delete_node(struct node ** head,struct node * min_node){
    struct node * the_node=*head;
    while ((*the_node).next!=min_node){
        the_node=(*the_node).next;
    }
    (*the_node).next=(*min_node).next;
    if (min_node==*head){
        *head=(**head).next;
    }


}
void insert_node(struct node ** head1,struct node * min_node){
    if (*head1==NULL){
        *head1=min_node;
        (**head1).next=min_node;
    }else{
        struct node * the_node =*head1;
        while((*the_node).next!=*head1){
            the_node=(*the_node).next;
        }
        (*min_node).next=*head1;
        (*the_node).next=min_node;
    }
}
void sort(struct node ** head,struct node ** head1){
    printf("hello");
    int n,i=0 ;
    n=length(*head);
    printf("\n n = %d",n);
    struct node * the_node=*head;
    struct node * min_node;

    while (i<n){
        printf("\ni = %d",i);
        min_node=min(*head);
        printf("\nmin_node = %d",(*min_node).value);
        delete_node(&*head,min_node);
        printf("\nhere is list A : \n ");
        display(*head);
        insert_node(&*head1,min_node);
        printf("\nhere is list B : \n ");
        display(*head1);
        i++;
    }
}
*/
int main()
{
    struct node * head=NULL;
    struct node * head1=NULL;
    head=create_list(5);
    display(head);


}