#include <iostream>

void Log(const char* message);

int main()
{
	int variable = 8; 
	// if you add the keyword unsigned you can double max number with int 4,2 billion instead of 2,1 billion

	Log("Hello World");
	std::cout << variable << std::endl;
	std::cin.get();
}
