#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void count_list_nodes(struct node* head)
{
    int count =0;
        if (head == NULL)
        {
            printf("%s","list is empty");
        }
        else
        {
            struct node* pt = head;

            while (pt!=NULL)
            {
                count+=1;
                pt = pt->link;
                
            }

            printf("number of nodes are = %d", count);
            
        }
}

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

    // traversing the linkedllist (counting the nodes)
    count_list_nodes(head);


    return 0;
}
