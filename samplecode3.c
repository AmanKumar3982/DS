#include <stdio.h>

#define MAX_SIZE 5

int circularQueue[MAX_SIZE];
int front = -1, rear = -1;

// Function to check if the circular queue is empty
int isEmpty() {
    return front == -1 && rear == -1;
}

// Function to check if the circular queue is full
int isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

// Function to insert an element into the circular queue
void CQINSERT(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }

    circularQueue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
}

// Function to delete an element from the circular queue
int CQDELETE() {
    int deletedValue;

    if (isEmpty()) {
        printf("Queue is empty. Cannot delete.\n");
        return -1;
    }

    deletedValue = circularQueue[front];

    if (front == rear) {
        front = rear = -1; // Reset the queue to an empty state
    } else {
        front = (front + 1) % MAX_SIZE;
    }

    return deletedValue;
}

int main() {
    CQINSERT(1);
    CQINSERT(2);
    CQINSERT(3);
    CQINSERT(4);
    CQINSERT(5);

    // Queue is now full

    int deletedValue = CQDELETE();
    if (deletedValue != -1) {
        printf("Deleted value: %d\n", deletedValue);
    }

    CQINSERT(6); // Should work since we've deleted one element

    return 0;
}