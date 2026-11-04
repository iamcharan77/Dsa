
#include<stdio.h>
#define MAX 5
int TOP=-1,stack[MAX-1],choice,value;
void push(int value);
void pop();
void display();
void peek();
void main()
{ 
         do
         {
                    printf("1.display\n2.push\n3.pop\n4.peek\n");
                    printf("Enter your choice\t");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                              case 1:display();
                                     break;
                              case 2:printf("Enter the elements: ");
                                     scanf("%d",&value);
                                     push(value);
                                     break;
                              case 3:pop();
                                     break;
                              case 4:peek();
                                     break;
                              default:exit(0); 
                    }
         } while(choice<5 && choice>0);
}
void push(int value)
{
          if(MAX==TOP)
          {
                    printf("overflow");
          }
          else
          {
        
          stack[++TOP]=value;                                                                                
          }
}
void pop()
{
          if(TOP==-1)
          {
                    printf("stack overflow");
          }
          else
          {
                    TOP--;
          }
}
void display()
{
          if(TOP==-1)
          {
                    printf("stack is empty\n");
          }
          else
          {
                    int i;
                    for(i=0;i<=TOP;i++)
                    {
                    printf("%d\n",stack[i]);
                    }
          }
}
void peek()
{
               if(TOP==-1)
               {
                       printf("stack is empty");
               }
               else
               {
                       printf("%d\n",stack[TOP]);
               }
}

