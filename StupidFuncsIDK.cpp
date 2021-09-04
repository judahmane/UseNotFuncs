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
void keyinputnice(std::string key)
{
	bool keyfart = true;
	
	std::cout << "Enter Key To Spam And Display\n";
	std::cin >> key;
	if (key == "A")
	{
		while (keyfart = true)
		{
			if (GetAsyncKeyState(VK_A))
			{
				Sleep(1);
				std::cout << "A\n";
			}
		}
	}  //pretty sure you can use this and reinterpt it to make a control settings code for a game or something like a reference to the function.
	else if (key == "D")
	{
		while (keyfart = true)
		{
			if (GetAsyncKeyState(VK_D))
			{
				Sleep(1);
				std::cout << "D\n";
			}
		}
	}
}

int main()
{
	std::cout << "That One Famous Debugging Thing\n";
}
