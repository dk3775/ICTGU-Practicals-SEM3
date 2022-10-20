#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int front;
    int rear;
    int size;
    int *array;
};
void enqueue(struct Queue *q, int data)
{
    if(q->rear == q->size-1)
    {
        printf("\nQueue is full");
    }else{
        q->rear++;
        q->array[q->rear] = data;
    }
}
int dequeue(struct Queue *q)
{
    int data = 0;
    if(q->front == q->rear)
    {
        printf("Queue is empty");
    }else{
        q->front++;
        data = q->array[q->front];
    }
    return data;
}
int print_queue(struct Queue *q)
{
    int i;
    for(i=q->front+1; i<=q->rear; i++)
    {
        printf("%d ", q->array[i]);
    }
}
int main(){
    struct Queue q;
    char msg[5];
    q.front = q.rear = -1;
    q.size = 5;
    q.array = (int *)malloc(q.size * sizeof(int));
    int a[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d", &a[i]);
    }
    enqueue(&q, a[0]);
    enqueue(&q, a[1]);
    enqueue(&q, a[2]);
    dequeue(&q);
    dequeue(&q);
    enqueue(&q, a[3]);
    dequeue(&q);
    enqueue(&q, a[4]);
    print_queue(&q);
    enqueue(&q, a[5]);
}
