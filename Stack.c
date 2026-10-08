
#include<stdio.h>
#define MAX 5
int TOP=-1,stack[4],choice,value;
void main()
{ 
         do
         {
                    printf("1.display\n2.push\n3.pop\n4.peek\n");
                    printf("Enter your choice\t");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                              case 1:display(stack[4]);
                                     break;
                              case 2:push();
                                     break;
                              case 3:pop();
                                     break;
                              case 4:peek();
                                     break;
                              case 5:exit(0);
                                     break;
                              default:exit(0);        
                    }
         } while(choice<5 && choice>0);
}
void push()
{
          if(MAX==TOP)
          {
                    printf("overflow");
          }
          else
          {
          printf("Enter the elements: ");
          scanf("%d",&value);
          stack[++TOP]=value;                                                                                
          }
}
int pop()
{
          if(TOP==-1)
          {
                    printf("stack overflow");
          }
          else
          {
                    return(--TOP);
          }
}
void display()
{
          if(TOP==-1)
          {
                    printf("stack is empty");
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

}
