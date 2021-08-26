#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

int main()
{
    struct node* head=NULL;
    head = (struct node*)malloc(sizeof(struct node*));
    head->data=50;
    head->link=NULL;
    // creating second node
    struct node* current = (struct node *)malloc(sizeof(struct node*));
    current->data=100;
    current->link=NULL;
    //connect the first node to this
    head->link=current;
    return 0;
}
