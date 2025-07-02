#include<stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    int *array;
};
int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int element){
    if(isFull(ptr)){
        printf("the stack is overflow\n");
    }
    else{
        ptr->top++;
        ptr->array[ptr->top] = element;
    }
}
int pop(struct stack *ptr){

    if(isEmpty(ptr)){
        printf("the stack is underflow cannot be Popped!");
        return -1;
    }
    else {
        int val = ptr->array[ptr->top];
        ptr->top--;
        return val;

    }
}
int peek(struct stack *ptr,int i){
    if(ptr->top-i+1<0){
        printf("invalid location for peek!");
        return -1;
    }
    else {
        return ptr->array[ptr->top-i+1];
    }
}

int main()
{
    
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 11;
    s->top = -1;
    s->array = (int*)malloc(s->size * sizeof(int));
    




    if(isFull(s)){
        printf("the stack is full\n");
    }else{
        printf("the stack is not full\n");
    }
    if(isEmpty(s)){
        printf("the stack is empty\n");
    }else{
        printf("the stack is not empty\n");
    }

    
    // printf("popped %d from the stack\n",pop(s));
    // printf("popped %d from the stack\n",pop(s));
    for (int i = 1;i<=s->top;i++){
        printf("the element of Index [%d] is %d\n",i,peek(s,i));
    }
    
    
    return 0;
}
