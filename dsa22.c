//queue question 1
#include <stdio.h>
#include<stdlib.h>

#define size 5
int queue [size];
int front = -1;
int rear = -1;

void enqueue(int data){
    if (rear==size-1){
        printf(".The queue is full:\n");
    }
    else{
        if (front==-1){
            front=0;

        }
        rear++;
        queue[rear]=data;
        printf("inserted data inside the queue is: %d  \n",data);
    }
}

void dequeue(){
    if (front==-1){
        printf("the queue is empty:\n");
    }else{
        printf(" the deleted item from the queue is : %d \n", queue[front]);
        if (front==rear)
        {
            front=rear=-1;

        }else{
            front++;
        }
        
    }
}

void transverse(){
    if (front==-1){
        printf("the queue is empty");
    }
    else{
        printf("the queue is: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice;
    int data;
    do{
        printf("1. insert data in queue: \n2. delete data from queue: \n3. transverse the data of the queue: \n4.exit\n Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        printf("enter value: ");
        scanf("%d",&data);
        enqueue(data);
        break;
        case 2:
        dequeue();
        break;
        case 3:
        transverse();
        break;
        case 4:
        exit(0);
        default:
        printf("Invalid");
        }
    }while(1);
    return 0;
}