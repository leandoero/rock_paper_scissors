#include <iostream>
#include <time.h>
using namespace std;
#define n1 endl;

int rock_paper_scissors()
{
	int a;
	srand(time(NULL));
	a = rand() % 3;
	return a;
}

int main()
{
	bool exe = true;
	int choice;
	char next;
	cout << "Hi! It's a game of rock-paper-scissors. Let's play, shall we?" << n1;
	cout << "1. yes\n"
		"2. no" << n1;
	cin >> choice;
	cout << "You entered: " << choice << "\n" << n1;
	if (choice == 1) 
	{
		while (exe)
		{
			int choice_second;
			cout << "Make your choice:\n"
				"1. rock\n"
				"2. paper\n"
				"3. scissors" << n1;
			cin >> choice_second;
			cout << "You entered: " << choice_second << "\n" << n1;
			cout << "Making my choice..." << n1;
			if (choice_second == 1)
			{
				int game = rock_paper_scissors();
				if (game == 1)
				{
					cout << "I have a rock. Tie\n" << n1;
				}
				else if (game == 2) {
					cout << "I have a paper. I win.\n" << n1;
				}
				else
				{
					cout << "I have a scissors. You win.\n" << n1;
				}
			}
			else if (choice_second == 2)
			{
				int game = rock_paper_scissors();
				if (game == 1)
				{
					cout << "I have a rock. You win.\n" << n1;
				}
				else if (game == 2) {
					cout << "I have a paper. Tie.\n" << n1;
				}
				else
				{
					cout << "I have a scissors. I win.\n" << n1;
				}
			}
			else if(choice_second == 3)
			{
				int game = rock_paper_scissors();
				if (game == 1)
				{
					cout << "I have a rock. I win.\n" << n1;
				}
				else if (game == 2) {
					cout << "I have a paper. You win.\n" << n1;
				}
				else
				{
					cout << "I have a scissors. Tie.\n" << n1;
				}
			}
			else 
			{
				cout << "invalid input." << n1;
				next = false;
				break;
			}
			cout << "Do you want to play again?\n"
				"y/n" << n1;
			cin >> next;
			if (next == 'y' || next == 'Y')
			{
				exe = true;
			}
			else if(next == 'n' || next == 'N')
			{
				exe = false;
				cout << "exit..." << endl;
			}
			else 
			{
				cout << "invalud input. try again!\n" << n1;
				exe = false;
			}
		}
	}
	else if (choice == 2) 
	{
		cout << "Goodbye\n" << n1;
	}
	else 
	{
		cout << "invalid input. try again!\n" << n1;
	}
}
