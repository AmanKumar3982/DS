#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;

void push(int value){
    if(top == size -1){
        printf("The stack is full \n");
    }
    else{
        top++;
        stack[top]=value;
        printf("\nValue Pushed : %d", value);

    }

}
void pop(){
    if(top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("\nThe popped element is: %d.\n", stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("the stack is empty\n");
    }
    else{
        printf( "\nThe peek value :  %d", stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("\nThe stack is empty:\n");
    }
    else{
        printf("\nThe stack elements are: \n");
        for (int i = top; i >=0; i--)
        {
            printf("%d ",stack[i]);
        }
        
    }
}
int main(){
    int choice;
    int value;
    do{
        printf("\n1.push value: \n2.pop value: \n3.peek value: \n4.display: \n5.exit\n\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter number you want to push: ");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("invalid:");


        }
    }while(1);
    /*
    push(6);
    push(7);
    push(8);
    push(5);
    push(3);
    pop();
    push(10);
    pop();
    pop();
    peek();
    display();
    */

    return 0;
}