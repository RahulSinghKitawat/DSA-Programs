#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("elements : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node* insertafternode(struct node*head , int val,struct node * prevnode){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
}

// struct node* atlast(struct node *head,int val){
//     struct node*p = head;
//     struct node * ptr = (struct node*)malloc(sizeof(struct node));
//     while(p->next!=NULL){
//         p = p->next;
//     }
//     ptr->data = val;
//     p->next = ptr;
//     ptr->next = NULL;
    
// }
// struct node*AtIndex(struct node* head, int val,int index){
//     struct node* ptr = (struct node*)malloc(sizeof(struct node));
//     struct node *p = head;
//     int i = 0;
//     while(i!=index-1){
//         p = p->next;
//         i++;
//     }
//     ptr->data = val;
//     ptr->next = p->next;
//     p->next = ptr;
    
// }
// struct node *AtFirst(struct node *head,int val){
//     struct node*ptr=(struct node*)malloc(sizeof(struct node));
//     ptr->data = val;
//     ptr->next = head;
//     return ptr;
// }

int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    insertafternode(head,12,second);
    // atlast(head,9);
    // AtIndex(head,7,1);
    // head = AtFirst(head,5);
    traversal(head);
    return 0;
}
