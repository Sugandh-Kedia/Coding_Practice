#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

// function prototypes
void enqueue(int);
int dequeue();

// function to add an order to the queue
void enqueue(int order) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = order;
    printf("Order %d added to the queue\n", order);
}

// function to remove an order from the queue
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return -1;
    }
    return queue[front++];
}

// main function
int main() {
    int max_orders, i, order, option;
    printf("Enter the maximum number of orders: ");
    scanf("%d", &max_orders);
    printf("Pizza parlor system simulation with a simple queue using an array\n");
    while (1) {
        printf("\n1. Place an order\n");
        printf("2. Serve an order\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                if (rear == max_orders - 1) {
                    printf("Maximum orders reached\n");
                } else {
                    printf("Enter the order number: ");
                    scanf("%d", &order);
                    enqueue(order);
                }
                break;
            case 2:
                if (front == -1 || front > rear) {
                    printf("No orders in the queue\n");
                } else {
                    printf("Order %d served\n", dequeue());
                }
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
