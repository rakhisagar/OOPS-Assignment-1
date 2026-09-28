#include <iostream>
using namespace std;
class Employee
{
private:
	int id;
	string name;
	float Salary;
public:
	Employee(int i, string n, float s)
	{
		id = i;
		name = n;
		Salary = s;
	}
	friend ostream&
	operator<<(ostream& out, const Employee& e)
	{
		out << "Employee ID: "<< e.id << endl;
		out << "Employee Name:"<< e.name << endl;
		out << "Employee Salary:"<< e.Salary << endl;
		return out;
	}
};
int main()
{
	Employee e(101, "Rakhi", 35000);
	cout << e;
	return 0;
}
		

	


