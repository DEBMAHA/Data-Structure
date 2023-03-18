// Stack implementation in SMA(array)
#include<stdio.h>
#include<stdlib.h>
#define Max 5
void push(int);
void pop();
void traversal();
void peek();
int stack[Max];
int top=-1;
int main()
{
    int ch,ele;
    while(1)
    {
        printf("\n..............Stack Operation...............\n");
        printf("Press 1 for push \n");
        printf("Press 2 for pop \n");
        printf("Press 3 for traversal \n");
        printf("Press 4 for peek \n");
        printf("Press 5 for exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("Enter an element : ");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:
                   pop();
                   break;
            case 3:
                   traversal();
                   break;
            case 4:
                   peek();
                   break;
            case 5:
                   exit(0);
            default:
                    printf("Please enter the number between 1-5 \n ");
                    break;       
        }
    }
    return 0;
}
void push(int x)
{
    if(top==Max-1)
    {
        printf("Stack is overflow condition \n");
    }
      else
      {
        top++;
        stack[top]=x;
      }
}
void pop()
{
  if(top==-1)
  {
    printf("stack is underflow condition\n");
  }
  else
  {
    printf("poped element is: %d \n",stack[top]);
    top--;
  }
}
void traversal()
{
    int i;
    if(top==-1)
    {
        printf("stack is underflow condition \n");
    }
    else
    {
        printf("stack elements are  :  ");
        for ( i=0;i<=top;i++)
        {
            printf("%d",stack[i]);
        }
        
    }
}
void peek()
{
    printf("peek element is %d \n ",stack[top]);
}

