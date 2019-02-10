#include<iostream>
#include"lab2q1.cpp"
using namespace std;
class stack
{
	public:
		node* top;
		linkedlist l1;
		stack()
		{
			top = l1.head;
		}
		//pushes on top
		void push(int value)
		{
			//void inserat(int pos,int value)
			l1.insertat(1,value);
			//top = new head;
			top = l1.head;
		}
		//pops the top
		void pop()
		{
			//void delat(int pos);
			l1.delat(1);
			//top = new head;
			top = l1.head;
		}
		bool isempty()
		{
			if(top == NULL) return true;
			return false;
		}
		void size()
		{
			l1.countitems();
		}
		void topdisplay()
		{
		
		}
		void display()
		{
			l1.display();
		}
};
int main()
{
	stack s1;
	for(int i = 0; i<5 ; i++)
		s1.push(i);
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.size();
	s1.isempty();	
}
