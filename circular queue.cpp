#include<stdio.h>
#define SIZE 5
int circular_queue[SIZE];
int rear = -1, front = -1;
void enqueue(int);
void dequeue();
void display();

int main()
{
	int choice,data;
	while(1)
	{
	printf("\n enter \n 1 for enqueue \n 2 for dequeue \n 3 for display \n 4for exit");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\n enter data");
			scanf("%d",&data);
			enqueue(data);
			break;
		case 2:
	    	dequeue();
			break;
		case 3:
			display();
			break;
			default:
				printf("\nBYE BYE!!");
		}
	}
	return 0;
}
void enqueue(int data)
{
	if((rear+1)%SIZE==front)
	{
	printf("\n Queue is already full");
	return;
	}
	else if(rear==-1 && front==-1)
	{
	
	rear=(rear+1) % SIZE;
	front=(front+1) % SIZE;
}
else
{
	rear=(rear+1) % SIZE;
}
circular_queue[rear]=data;
printf("%d is enqueued ",circular_queue[rear]);

}
	

	void dequeue()
	{
		if(rear==-1&&front==-1)
		{
			printf("\n Queue is already empty");
		}
		else if(rear==front)
		{
			rear=-1;
			front=-1;
			
		}
		else{
			front=(front+1)%SIZE;
			printf("%d is dequeued ",circular_queue[front]);
			
		}
		
	}
	void display()
	{ int i;
		if(rear==-1 && front==-1)
		{
			printf("\n Queue is already empty");
		}
		else{
		
			for(i=front;i!=rear;i=(i+1) % SIZE)
			{
				printf("\n%d",circular_queue[i]);
			}
			printf("\n%d",circular_queue[rear]);
		}
		}
			
		
		
	
				

