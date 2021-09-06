#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
#include <string>
#include <fstream>

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
void multiple(int num1, int num2)
{
	std::cout << num1 * num2 << std::endl;
}
void divide(int num1, int num2)
{
	std::cout << num1 / num2 << std::endl;
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
			Sleep(1);
			std::cout << "Space\n";
		}
		else if (GetAsyncKeyState(VK_W))
		{
			Sleep(1);
			std::cout << "W\n";
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
	}
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
void rng()
{
	bool stupid2 = true;
	int stupid1;
	srand(time(0));
	// delete while loop if want not to loop ok sorry.
	while (stupid2 = true)
	{
		std::cout << "RNG A NUMBER RANGING FROM 1st to 2nd\n";
		std::cout << "First Number: " << std::endl;

		std::cin >> stupid1;

		std::cout << rand() % stupid1 << std::endl;
	}
}
void sqr(int num1)
{
	std::cout << "Enter The Two Numbers You Want squared\n";
	std::cout << "Enter Num: \n";
	std::cin >> num1;
	std::cout << sqrt(num1) << std::endl;
	
}
void reversestring(std::string reversestr)
{
	
	std::cout << "Enter text you want reversed\n";
	std::cin >> reversestr;
	
	reverse(reversestr.begin(), reversestr.end());

	std::cout << reversestr << std::endl;
}
void haxorpov(std::string weiner)
{
	bool txt = true;
	while(txt = true)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			std::cout << "0000011110111111001111";
			std::cout << "00010010101010110111111001111";
			std::cout << "000001111001111";
			std::cout << "000001111011111100111010010101";
			std::cout << "000001111100000101010100010100111111001111";
			std::cout << "000001111011111100111010010101";
			std::cout << "000001111001111";
			std::cout << "000001111100000101010100010100111111001111";
			std::cout << "0000011110111111001111";
			std::cout << "0011001010";
			std::cout << "11111001011001010101010";
			std::cout << "00000000001111111110";
			std::cout << "01011010010101010101";
		}
	}
}
void infilefunction(std::string e)
{
	std::fstream file;
	file.open = ("text.txt");
	file << "Winer";
	file.close();
	
	
}

int main()
{
	
	std::cout << "That One Famous Debugging Thing\n";
	infilefunction("");
}
