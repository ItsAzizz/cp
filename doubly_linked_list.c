#include <stdio.h>
#include <stdlib.h>
struct node {
    char value ;
    struct node * next ;
    struct node * prev ;
};
void create(struct node ** head){
    *head=(struct node * )malloc(sizeof(struct node ));
    printf("give me a char: ");
    scanf("%c",&(**head).value);
    (**head).next=*head;
    (**head).prev=*head;
}
void ajout (struct node * new_node,struct node ** prev_node){
    new_node->prev=*prev_node;
    new_node->next=(*prev_node)->next;
    (*prev_node)->next=new_node;
    *prev_node=new_node;

    printf("\nnew_node.value= %c",new_node->value);
}
void fill(struct node ** head ){
    create(head);
    char car;
    struct node * new_node;
    struct node * prev_node=head;
    printf("\ngive me a char :" );
    scanf("%c",&car);
    int i=0;
    while (i<5){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->value=car;
        ajout(new_node,&prev_node);
        printf("\nchar = %c",car);
        printf("\ngive me a char :" );
        scanf("%c",&car);
        i++;

    }
}
void display(struct node * head){
    struct node * the_node=head;
    while (1){
        printf("\nnode.value = %c",the_node->value);
        the_node=the_node->next;
        if (the_node==head){
            return ;
        }
    }
}
int main()
{
    struct node * head;
    fill(&head);
    display(head);
}
