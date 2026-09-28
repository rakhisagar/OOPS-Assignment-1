#include <iostream>
using namespace std;
class Calculator
{
	public:
		int add(int a, int b)
		{
			return a + b;
		}
		int add(int a, int b, int c)
		{
			return a + b;
			
		}
};
		int add(int a, int b, int c)
		{
			return a + b + c;
		}
		double add(double a, double b)
		{
			return a + b;
		}
		

class parent
{
	public:
		virtual void display()
		{
			cout << "Display from parent class" << endl;
		}
};
class child : public parent
{
	public:
		void display() override
		{
			cout << "Display from child class" << endl;
		}
};
int main()
{
	Calculator c;
	cout << "Addition of 2 integers: "
	<< c.add(10,20)<< endl;
	cout << "Addition of 3 integers: "
	<< c.add(10,20,30)<< endl;
	cout << "Addition of 2 doubles: "
	<< c.add(10.5, 20.5)<< endl;
	parent* p;
	child obj;
	p = &obj;
	p->display();
	return 0; 
	
}
