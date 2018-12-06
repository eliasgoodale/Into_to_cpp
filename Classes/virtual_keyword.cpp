#include <iostream>
using namespace std;

#define NAME_SIZE 50

class Person {
	int id;
	char name[NAME_SIZE];

	// Giving an object a virtual data_type allows its methods to be overwritten by methods of another class that it is instatiated as

	public:
		virtual void aboutMe() { 
			cout << "I am a person" << endl;
		}
		virtual bool addCourse(string s) = 0;
};

/*
** When passing a non-primitive value (class or constant) to a class use the colon instead of a (tuple)
*/

class Student : public Person { 
	public:
		void aboutMe() {
			cout << "I am a student." << endl;
		}

		bool addCourse(string s) {
			cout << "Added course " << s << " to student." << endl;
			return true;
		}
};

int main() {
	Student *p = new Student();
	p->aboutMe();
	delete p;

	Person *d = new Student();
	d->aboutMe();
}