int main(){

    // enqueue(10); enqueue(20); enqueue(30); enqueue(40); enqueue(50); dequeue(); dequeue(); dequeue(); enqueue(60); traverse();

    int opt;
    int data;
    do
    {
        printf("1. To insert element into Queue.\n2. To delete an element from Queue.\n3. For traversing of array.\n4. Exit\nEnter choice : ");
        scanf("%d", &opt);
        
        switch (opt)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid");
        }
    }while(1);
    

    return 0;
}