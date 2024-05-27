#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int arr[5];
    int top;
};
typedef struct stack st;
void push(st *s1,int ele)
{
    if(s1->top==4)
    {
        printf("Stack is full");
    }
    else{
        s1->top++;
        s1->arr[s1->top]=ele;
    }
}
int pop(st *s1)
{
    if(s1->top==-1)
    {
        return 9999;
    }
    else
    {
        int ele=s1->arr[s1->top];
        s1->top--;
        return ele;
    }
}
void display(st *s1)
{
    int i=0;
    while(i<=s1->top)
    {
        printf("%d   ",s1->arr[i]);
        i++;
    }
}
void main()
{
    st s;
    s.top=-1;
    int ch,x,m;
    while(1)
    {
        printf("Enter\n1 push \n2 pop\n3 display\n4 quit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter the no to push\n");
            scanf("%d",&m);
            push(&s,m);
            break;

            case 2:
            x=pop(&s);
            if(x==9999)
            printf("\nStack underflows\n");
            else
            {
                printf("%d",x);
            }
            break;
            case 3:
            printf("\nStack is: ");
            display(&s);
            break;
            case 4:
            return;
        }
    }
}

