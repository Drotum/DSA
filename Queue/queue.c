#include<stdio.h>
struct queue
{
    int arr[5];
    int f;
    int r;
};
typedef struct queue q;
void enqueue(q *q1,int ele)
{
    if(q1->r==4)
    {
        printf("Queue is full");
        return;
    }
    else{
    q1->r++;
    q1->arr[q1->r]=ele;
    }
}
int dequeue(q *q1)
{
    int ele;
    if(q1->f == q1->r)
    {
        ele=q1->arr[q1->f];
        q1->f=0;
        q1->r=-1;
        return ele;
    }
    if(q1->f < q1->r)
    {
        ele=q1->arr[q1->f];
        q1->f++;
        return ele;
    }
}
void display(q *q1)
{
    int i=q1->f;
    while(i<=q1->r)
    {
        printf("%d   ",q1->arr[i]);
        i++;
    }
}
void main()
{
    q qu;
    qu.f=0;
    qu.r=-1;
    int m,x,ch;
    while(1)
    {
        printf("Enter\n1 push \n2 pop\n3 display\n4 quit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter the no to enqueue\n");
            scanf("%d",&m);
            enqueue(&qu,m);
            break;

            case 2:
            x=dequeue(&qu);
            printf("%d",x);
            break;
            case 3:
            printf("\nStack is: ");
            display(&qu);
            break;
            case 4:
            return;
        }
    }
}