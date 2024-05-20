#include <string.h>
#include <iostream>

int main(int argc,char **argv)
{
	if(argc != 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		std::string message = argv[1];
		std::transform(message.cbegin(), message.cend(), message.begin(), toupper);
		std::cout << message << "\n";
	}
}
