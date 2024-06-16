/************************************************************************************************
	Name: CoachLDEW
	Date: 06.16.2024
	Purpose: This program will set the text and console colors using the numbers 0-15
			 0 - BLACK			6 - YELLOW			12 - LIGHTRED
			 1 - BLUE			7 - WHITE			13 - LIGHTPURPLE
			 2 - GREEN			8 - GREY			14 - LIGHTYELLOW
			 3 - AQUA			9 - LIGHTBLUE		15 - BRIGHT WHITE
			 4 - RED			10 - LIGHTGREEN
			 5 - PURPLE			11 - LIGHTAQUA
************************************************************************************************/

#include <iostream>
#include <Windows.h>


using namespace std;

// Windows Specific
void SetConsoleColor(int textColor, int bgColor) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (textColor + (bgColor * 16)));
}

int main()
{
	for (int i = 0; i < 16; i++)
	{
		SetConsoleColor(i, 0);

		cout << "Hello World!" << endl;
	}

	return 0;
}