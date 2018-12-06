#include <algorithm>
#include <iostream>
#include <new>
void	print_1darr(char *arr)
{
	while(*arr)
	{
		std::cout << *arr;
		arr++;
	}
}

void	print_2darr(char **arr, size_t len)
{
	for(int i = 0; i < len; i++)
	{
		print_1darr(arr[i]);
		if (i != len - 1)
			std::cout << " ";
	}
	std::cout << std::endl;	
}

void	print_arr(int *arr, size_t len)
{
	for(int i = 0; i < len; i++)
	{
		std::cout << arr[i];
		if (i != len - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

int main()
{
	const int len = 5;
	int numArr[len] = { 30, 50, 20, 10, 40 };
	char *strArr[len] = new char[len][]
	{"Hello", "World", "I", "Am", NULL};
	int i, j;
	std::cout << "Unsorted: " << std::endl;
	print_arr(numArr, len);
	std::sort(numArr, numArr + len);
	std::cout << "Sorted: " << std::endl;
	print_arr(numArr, len);

	std::cout << "Unsorted: " << std::endl;
	print_2darr(strArr, len);
	std::sort(strArr, strArr + len);
	std::cout << "Sorted: " << std::endl;
	print_2darr(strArr, len);
	return 0;
	return 0;
}