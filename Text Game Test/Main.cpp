#include <iostream>
#include <stdlib.h>
#include <string>

void ClearScreen()
{
	using namespace std;

	cout << string(100, '\n');
}

void main() {

	using namespace std;

	char character_name [50];
	char name_check = 'n';
	char menu_choice;

	cout << "    <Blank> Game!\n\n"
		"-------------------------\n"
		"--------Main Menu--------\n"
		"-------------------------\n\n"
		"1--------Play Game \n"
		"2--------How to Play\n"
		"3--------Exit Game\n";
	cout << "Please enter your choice:";
	cin >> menu_choice;
	switch (menu_choice) {
	case '1':
		break;
	case '2': cout << "No\n";
		break;
	case '3': exit(0);
		break;

	}
	ClearScreen();










	while (name_check == 'n' || name_check == 'N') {
		cout << "What is your name?" << endl;
		cout << "Please input your name: ";
		cin >> character_name;
		cout << "Are you sure this is the name you want? Y or N\n";
		cin >> name_check;
		if (name_check == 'y' || name_check == 'Y')
		{
			break;
		}
	}
	ClearScreen();

	cout << "----------------------------------------\n"
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
		"You have heard about a group of bandits that have been terrorizing a local town and you want to put a stop to it.";

		

		


	int pause;
	cin >> pause;

}