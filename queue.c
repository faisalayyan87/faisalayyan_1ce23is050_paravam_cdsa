#include <stdio.h>
typedef struct
{
    int data[5];
    int front;
    int rear;
} Queue;
void initQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}
int isEmpty(Queue *q)
{
    return q->front == -1;
}
int isFull(Queue *q)
{
    return q->rear == 4;
}
void enQueue(Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue overflow!\n");
        return;
    }
    if (isEmpty(q))
    {
        q->front = 0;
    }
    q->data[++q->rear] = value;
}
int deQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow!\n");
        return -1;
    }
    int value = q->data[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return value;
}
    int peek(Queue * q)
    {
        if (isEmpty(q))
        {
            printf("Queue is empty!\n");
            return -1;
        }
        return q->data[q->front];
    }
    void printQueue(Queue * q)
    {
        if (isEmpty(q))
        {
            printf("Queue is empty!\n");
            return;
        }
        printf("Queue:");
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%d ", q->data[i]);
        }
        printf("\n");
    }
    int main()
    {
        Queue q;
        initQueue(&q);

        enQueue(&q, 1);
        enQueue(&q, 2);
        enQueue(&q, 3);
        printQueue(&q);
        printf("Dequeued:%d\n", deQueue(&q));
        printQueue(&q);
        printf("Front: %d\n", peek(&q));
        enQueue(&q, 4);
        enQueue(&q, 5);
        enQueue(&q, 6);
        printQueue(&q);
        return 0;
    }