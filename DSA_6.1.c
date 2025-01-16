#include <stdio.h>

#define MAX_ORDERS 100 // maximum number of orders that can be accepted
#define MAX_QUEUE_SIZE MAX_ORDERS // maximum size of the queue

int queue[MAX_QUEUE_SIZE]; // the queue to hold the orders
int front = -1; // front of the queue
int rear = -1; // rear of the queue

int isFull() {
    return rear == MAX_QUEUE_SIZE - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int order) {
    if (isFull()) {
        printf("Cannot accept order %d. Maximum orders reached.\n", order);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = order;
    printf("Order %d added to queue.\n", order);
}

int dequeue() {
    if (isEmpty()) {
        printf("No orders in queue.\n");
        return -1;
    }
    int order = queue[front];
    front++;
    printf("Order %d served.\n", order);
    return order;
}

int main() {
    int max_orders, order_num;
    printf("Enter the maximum number of orders that can be accepted: ");
    scanf("%d", &max_orders);
    printf("Enter the order numbers (enter -1 to stop):\n");
    do {
        scanf("%d", &order_num);
        if (order_num != -1) {
            enqueue(order_num);
        }
    } while (order_num != -1 && !isFull());
    while (!isEmpty()) {
        dequeue();
    }
    return 0;
}
