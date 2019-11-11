#include<bits/stdc++.h>
using namespace std;

struct Queue
{
int rear,front;
int size;
int *arr;
Queue(int s)
{
	front=rear=-1;
	size=s;
	arr=new int[s];
}
	void enQueue(int value);
	int deQueue();
	void displayQueue();
};

void Queue::enQueue(int value)
{
	if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)))
	{
		cout<<"queue is full";
		return;
	}
	else
	if(front==-1)
	{
		front=rear=0;
		arr[rear]=value;
	}
	else
	if(rear==size-1 && front!=0)
	{
		rear=0;
		arr[rear]=value;
	}
	else
	{
		rear++;
		arr[rear]=value;
	}
}

int Queue::deQueue()
{
	if(front==-1)
	{
		cout<<"Queue is empty";
		return INT_MIN;
	}
	int data=arr[front];
	int data=arr[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	if(front==size-1)
	front=0;
	else
	front++;
	return data;
}

void Queue::displayQueue()

{
	
}




int main()
{
	
}
