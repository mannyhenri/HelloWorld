#include <iostream>
#include <string>

void Log(const char *message);

int main()
{
	// variables
	// int variable = 8;
	// if you add the keyword unsigned you can double max number with int 4,2 billion instead of 2,1 billion
	// float decimal = 5.5; // if you want to save memory add f to the decimal to make it a float instead of double
	bool choice = true; // boolean

	Log("Hello World");
	std::cout << choice << std::endl;
	// std::cout << sizeof(choice) << std::endl; // to know how many bytes a variable takes into memory
	std::cin.get();
}
