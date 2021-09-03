#include <iostream>
#include <Windows.h>
#include <stdlib.h>

void stop()
{
	exit; //for this to work you need to run the exe from the bin folder.
}
void add(int num1, int num2)
{
	std::cout << num1 + num2 << std::endl;
}
void sub(int num1, int num2)
{
	std::cout << num1 - num2 << std::endl;
}
void spammer(std::string spam)
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << spam << std::endl;
	}
}
void getkeyinput()
{
    bool space = true;

	while (space = true)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			Sleep(100);
			std::cout << "Space\n";
		}
	}
}

int main()
{
	std::cout << "That One Famous Debugging Thing\n";
}
