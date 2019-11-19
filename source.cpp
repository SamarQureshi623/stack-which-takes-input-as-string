#include<iostream>
#include<string>
using namespace std;
struct stack
{
	char name;
	stack *next;
};
stack *top = NULL;
bool isempty()
{
	if (top == NULL)
	{
		cout << "there is nothing in stack:\n";
		return true;
	}
	return false;
}
stack * createnode(char data)
{
	stack* n = new stack;
	if (n == NULL)
	{
		cout << "error ocur:\n";
		return NULL;
	}
	n->name = data;
	n->next = NULL;
	return n;

}
bool push(char data)
{
	stack *n = createnode(data);

	if (n == NULL)
	{
		cout << "error :\n";
		return false;
	}
	n->next = top;
	top = n;
	return true;
}
void Top()
{
	cout << top->name << endl;
}
void display()
{
	if (top == NULL)
	{
		cout << "nothing to show:\n";
	}
	else
	{
		stack*n = top;
		while (n != NULL)
		{
			cout << n->name << endl;
			n = n->next;
		}
	}
}
void main()
{
	string a;
	cout << "enter name :\n";
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		push(a[i]);

	}
	display();
	system("pause");
} 
 
