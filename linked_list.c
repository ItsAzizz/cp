#include <stdio.h>
#include <stdlib.h>
struct node{
    int value;
    struct node * next;
};
void fill(struct node ** head){
    struct node * new_node;
    struct node* the_node=*head;
    int number;
    printf("\ngive me the number : ");
    scanf("%d",&number);
    while (number>0){
        new_node=(struct node *)malloc(sizeof(struct node));
        (*new_node).value=number;
        (*new_node).next=NULL;
        if (*head==NULL){
            *head=new_node;
            the_node=*head;
        }else{
            (*the_node).next=new_node;
            the_node=new_node;
        }
        printf("\ngive me the number : ");
        scanf("%d",&number);
}

}
void display (struct node * head){
    while (head!=NULL){
        printf("\nnode.value = %d ",(*head).value);
        head=(*head).next;
    }
}
int main()
{
    struct node * head= NULL;
    fill(&head);
    printf("\nhere is the array : \n");
    display(head);
}