#include <iostream>

int main()
{
	int note = 1;

	if (note == 0)
	{
		std::cout << "0" << std::endl;
	}
	else if (note == 1)
	{
		std::cout << "1" << std::endl;
	}
	else
	{
		std::cout << note << std::endl;
	}
	
	int age = 33;

	switch (age)
	{
		case 0:
			std::cout << "You are still very young!" << std::endl;
			break;
		case 1:
			std::cout << "You are getting on in life" << std::endl;
			break;
		case 2:
			std::cout << "You are what you are..." << std::endl;
			break;
	}

	int i = 0;

	while (i < 10)
	{
		std::cout << "Hello" << std::endl;
		i++;
	}

	for (int num = 0; num < 25; num++)
	{
		std::cout << "Hi" << std::endl;
	}
}