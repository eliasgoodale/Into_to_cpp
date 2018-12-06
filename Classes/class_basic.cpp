#include <string>
#include <iostream>

using namespace std;

class	Brain
{
	public:
	string	brain_type;
	int		id;

	void print_id();
	
	void print_bt()
	{
		cout << "Braintype is: " << brain_type;
	}
};

/*
** Scope Resolution
*/

void Brain::print_id()
{
	cout << "Id is: " << id;
}

int main()
{
	Brain new_brain;

	new_brain.brain_type = "Snake";
	new_brain.print_bt();
	return 0;
}