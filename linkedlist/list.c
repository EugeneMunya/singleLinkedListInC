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
    head = (struct node*)malloc(sizeof(struct node));
    head->data=50;
    head->link=NULL;
    // creating second node
    struct node* nextNode = (struct node *)malloc(sizeof(struct node));
    nextNode->data=100;
    nextNode->link=NULL;
    //connect the first node to this
    head->link=nextNode;

    nextNode = (struct node*)malloc(sizeof(struct node));
    nextNode->data=150;
    nextNode->link = NULL;
    head->link->link= nextNode;

    return 0;
}
