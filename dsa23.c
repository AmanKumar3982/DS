//Corrected

#include <stdio.h>
#include <stdlib.h>

#define size 5
int cqueue[size];
int front = -1, rear = -1;

void CQINSERT(int value)
{
    if ((rear + 1) % size == front)
    {
        printf(".The queue is full:\n");
    }
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }
    cqueue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
}

int CQDELETE()
{
    int deletedvalue;
    if (front == -1 && rear == -1)
    {
        printf("the queue is empty:\n");
        return -1;
    }
    deletedvalue = cqueue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }

    return deletedvalue;
}

int main()
{
    int choice;
    int data;
    int rtn;
    do
    {
        printf("1. insert data in queue: \n2. delete data from queue:  \n3.exit\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter value: ");
            scanf("%d", &data);
            CQINSERT(data);
            break;
        case 2:
            rtn = CQDELETE();
            if(rtn!=-1){
                printf("Deleted Value : %d\n", rtn);
                break;
            }
            else{
                break;
            }
        case 3:
            exit(0);
        default:
            printf("Invalid");
        }
    } while (1);
    return 0;
}
