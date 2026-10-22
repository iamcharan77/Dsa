#include<stdio.h>
//create functions related to queue operation insertion,deletion,display,peek
#define MAX 5
int front=-1,rear=-1,choice,value,queue[MAX];
void Enqueue();
void Dequeue();
void Display();
void Peek();
void main()
{
          do
          {
           if(rear==MAX||rear>front)
          {
                    rear=-1;
                    front=-1;
          }
          printf("1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Exit\nenter your choice\t");
          scanf("%d",&choice);
          switch(choice)
          {
                    case 1:Enqueue();
                           break;
                    case 2:Dequeue();
                           break;
                    case 3:Display();
                           break;
                    case 4:Peek();
                           break;
                    case 5:exit(0);
                    default:printf("Invalid choice\n");
                            choice=1;
           }
          } while(choice<5 && choice>0);
}
void Enqueue()
{
          if(front==MAX-1)
          {
                    printf("queue overflow\n");
          }
          else
          {
                    printf("Enter the element\t");
                    scanf("%d",&value);
                    queue[++front]=value;
          }
          if(front==0)
          {
                    rear=front;
          }
}
void Dequeue()
{
          if(rear==-1)
          {
                    printf("Queue underflow\n");
          }
          else
          {
                    printf("%d is deleted\n",queue[rear]);
                    rear++;
          }
}
void Display()
{
          if(front==-1)
          {
                    printf("Queue underflow\n");
          }
          else
          {
                    int i;
                    for(i=front;i>=rear;i--)
                    {
                              printf("%d\n",queue[i]);
                    }
          }
}
void Peek()
{
         if(front==-1)
         {
          printf("Queue is empty\n");
         } 
         else
         {
          printf("Peek element is %d\n",queue[front]);
         }
}
