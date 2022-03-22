#include<string>
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void rules();

int main()
{
	string name;
	int balance;
	int bet;
	int dice;
	int guess;
	char choice;
	srand(time(0));
	cout << "\n\t\t========WELCOME TO CASINO WORLD=======\n\n";
	cout << "What's your name?" << endl;
	getline(cin,name);
	cout << "Enter your starting balance for the game: ";
	cin >> balance;
	do 
	{
		system("cls");
		rules();
		cout << "\n\nYour current balance is $ " << balance << "\n";

		do 
		{
			cout << "Hey, " << name << ", enter amount to bet : $";
			cin >> bet;
			if (bet > balance) 
			{
				cout << "You don't have enough money :(" << endl;

			}
		}while(bet > balance);

		do 
		{
			cout << "Enter your guess between 1 and 10: " << endl;
			cin >> guess;
			if (guess < 1 || guess > 10) {
				cout << "Enter new number between 1 and 10 " << endl;
			}
		} while (guess < 1 || guess > 10);

		dice = rand() % 10 + 1;
		if (dice == guess) 
		{
			cout << "Congrats!! You won "<< bet * 10 << endl;
			balance -= bet;
			bet *= 10;
			balance += bet;

		}
		else 
		{
			cout << "Opss... That's the wrong number, the right one was: " << dice << endl;
			balance -= bet;
			cout << "Your current balance is :" << balance << endl;

		}

		if (balance == 0) 
		{
			cout << "You have no money left" << endl;
			break;
		}

		cout << "Do you want to play again? (y/n)" << endl;
		cin >> choice;

	}while(choice == 'y');

	cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";
	return 0;
}

void rules() {
	system("cls");
	cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
	cout << "\t1. Choose a number between 1 to 10\n";
	cout << "\t2. Winner gets 10 times of the money bet\n";
	cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}

