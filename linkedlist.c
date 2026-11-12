#include <stdio.h>
#include<stdlib.h>
struct node
{
          int data;
          struct node *next;
};
typedef struct node *NODE;
NODE getnode(int item)
{
          NODE temp =(NODE)malloc(sizeof(struct node));
          temp -> data = item;
          temp -> next = NULL;
          return temp;
}
NODE insert_front(NODE first,int item)
{
          NODE temp=getnode(item);
          temp-> next =first;
          return(temp);
}
NODE delete_front(NODE first)
{
          NODE temp;
          if(first==NULL)
          {
                    printf("List is empty\n");
                    return NULL;
          }
          temp=first;
          first -> next =first;
          printf("Deleted element :%d\n",temp -> data);
          free(temp);
}
void  display(NODE first)
{
          if(first==NULL)
          {
                    printf("List is empty\n");
                    return;
          }
          else
          {
                    printf("List:");
                    for(;first=!NULL;first=first->next)
                    {
                              printf("%d",first -> data);
                              return;
                    }
          }
}
void main()
{
          NODE first=NULL,temp;
          int choice,item,i=1;
          while(i=1)
          {
                    printf("----Linked list demo----\n");
                    printf("1.Insert at front\n2.Delete at front\n3.Display\n4.Exit\nEnter your choice\n");
                    scanf("%d",&choice);
                    if(choice==1)
                    {
                              printf("Enter the element to be inserted\t");
                              scanf("%d",&item);
                              temp = insert_front(first,item);
                    }
                    else if(choice==2)
                    {
                              delete_front(first);
                    }
                    else if(choice==3)
                    {
                              display(first);
                    }
                    else if(choice==4)              
                    {
                              exit(0);
                              i=0;
                    }
                    else
                    {                 
                    printf("Enter a valid choice\n");  
                    }
          }
} 
