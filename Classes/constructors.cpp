#include <string>
#include <iostream>

using namespace std;

class	Brain
{
	public:

	string	brain_type;
	int		id;
	
	/*
	** Default constructor for class
	*/

	Brain()
	{
		cout << "New Brain constructed" << endl;
		id = -1;
	}
	/*
	** Parameterized constructor for class
	*/
	Brain(int x)
	{
		cout << "New Brain constructed with id: " << x << endl;
		id = x;
	}

	void print_id()
	{
		cout << "Id is: " << id;
	}
	
	void print_bt()
	{
		cout << "Braintype is: " << brain_type;
	}

	/*
	** Destructor for class
	*/

	~Brain()
	{
		cout << "Destructor called for id: " << id << endl;
	}
};

int main()
{
    Brain obj1;
    cout << "Geek id is: " << obj1.id << endl;
     
    // obj1 will call Parametrized Constructor
    Brain obj2(21);
    cout << "Geek id is: " << obj2.id << endl;
	cout << "\n\n\n\n";
	Brain obj3;
	obj3.id=7;
    int i = 0;
    while ( i < 5 )
    {
        Brain obj2;
        obj2.id=i;
        i++;
         
    }
    return 0;
}