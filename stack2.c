#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct Stack
{
    int items[MAX];
    int top;
};

void initstack(struct Stack *s);
int isFull(struct Stack *s);
int isEmpty(struct Stack *s);
void push(struct Stack *s, int value);
int pop(struct Stack *s);
void displaystack(struct Stack *s);

void initstack(struct Stack *s)
{
    s->top = -1;
}

int isFull(struct Stack *s)
{
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

void push(struct Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack is full! Cannot push %d\n", value);
    }
    else
    {
        s->top++;
        s->items[s->top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
}

int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty! Cannot pop\n");
        return -1;
    }
    else
    {
        int poppedValue = s->items[s->top];
        s->top--;
        printf("Popped %d from the stack\n", poppedValue);
        return poppedValue;
    }
}

void displaystack(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++)
        {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct Stack stack;
    initstack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);
    push(&stack, 60);

    displaystack(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);

    displaystack(&stack);

    return 0;
}