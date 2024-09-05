#include<stdio.h>
#include<stdlib.h>

#define N 5
int front=-1;
int rear=-1;
int quene[N];
void enquene(int x)
    {
         if ((rear+1)%N==front)
      {
          printf("quene is full");
    }
      else if(front==-1&& rear==-1){
         front=0;
         rear=0;
        quene[rear]=x;
}
   else
           {
             rear=(rear+1)%N;
            quene[rear]=x;
         }
}
void dequene()
{
     if(front==-1&&rear==-1)
    {
       printf("quene is empty");
      } 
      else  {
             printf("delete%d\n",quene[front]);
             front=(front+1)%N;
       }
      if (front==rear){
         front=-1;
         rear=-1;
           }
}
void display()
{
      int i=front;
       if (front==-1&&rear==-1) 
      {
        printf("quene is empty");
       }
      else
     {
printf(" the quene element are\n");
     while(i!=rear)
      {
        printf("%d\n", quene[i]);
        i=(i+1)%N;
    }
printf("%d\n",queue[rear]);
    }
}
  int main(){
  int choice,x;
  while(1){
printf("enter the choice\n");
printf("1: enquene\n");
printf("2: dequene\n");
printf("3: display\n");
printf("4 : exit\n");
  scanf("%d",&choice);
switch (choice){
    case 1:
         printf("enter the quene\n");
         scanf("%d", &x);
          enquene(x);
       break;
     case 2 :
       dequene();
     break;
     case 3:
          display();
          break;
     case 4 :
           exit(0);
   default:
        printf("enter the correct choice\n");
         break;
     }
   printf("\n\n");
  }
  return 0;
}
