#include<iostream>
#include"lab2q1.cpp"
using namespace std;
class queue
{
	public:
	node * top;
	linkedlist l1;
	queue()
	{
		top = l1.head;
	}
	void inqueue(int value)
	{
		l1.insertat(1,value);
		top = l1.head;
	}
	void dqueue()
	{
		l1.del();
	}
	bool isempty()
	{
		if(top == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void size()
	{
		l1.countitems();
	}
	void display()
	{
		l1.display();
	}
};
int main()
{
	queue q1;
	for(int i = 1; i<5 ; i++)
		q1.inqueue(i);
	q1.display();
	q1.dqueue();
	q1.display();
	q1.dqueue();
	q1.size();
	q1.isempty();	
	
}
