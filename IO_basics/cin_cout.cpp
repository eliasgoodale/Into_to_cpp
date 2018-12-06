#include <iostream>

int add(int x, int y)
{
	return x + y;
}


int main()
{
	/*
	** Basic
	*/
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	std::cout << "You entered: " << x << std::endl;

	/*
	** 
	*/
	int a;
	int b;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> a;
	std::cout << "Enter another number: " << std::endl;
	std::cin >> b;
	std::cout << "The sum is: " << add(a, b) << std::endl;

}