#include <iostream>
#include <stdlib.h>
#include <string>

void ClearScreen()
{

	std::cout << std::string(50, '\n');
}

void main() {

	char character_name [50];
	char name_check = 'n';
	char menu_choice;

	std::cout << "    <Blank> Game!\n\n"
		"-------------------------\n"
		"--------Main Menu--------\n"
		"-------------------------\n\n"
		"1--------Play Game \n"
		"2--------How to Play\n"
		"3--------Exit Game\n";
	std::cout << "Please enter your choice:";
	std::cin >> menu_choice;
	switch (menu_choice) {
	case '1':
		break;
	case '2': std::cout << "No\n";
		break;
	case '3': exit(0);
		break;

	}
	ClearScreen();










	while (name_check == 'n' || name_check == 'N') {
		std::cout << "What is your name?" << std::endl;
		std::cout << "Please input your name: ";
		std::cin >> character_name;
		std::cout << "Are you sure this is the name you want? Y or N\n";
		std::cin >> name_check;
		if (name_check == 'y' || name_check == 'Y')
		{
			break;
		}
	}
	ClearScreen();

	std::cout << "----------------------------------------\n"
		"-                                      -\n"
		"-                                      -\n"
		"-    Welcome to my Text-Based RPG!     -\n"
		"-                                      -\n"
		"-           by Zach Varmette           -\n"
		"-                                      -\n"
		"-                                      -\n"
		"-                                      -\n"
		"-                                      -\n"
		"----------------------------------------\n\n\n"
		"Your name is " << character_name << " and you are an adventurer!\n\n"
		"You have heard about a group of bandits that have been terrorizing a local town and you want to put a stop to it."
		"Test for github!";

		

		


	int pause;
	std::cin >> pause;

}