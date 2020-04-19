#include "character.h"
//libraries
#include <string>
#include <iostream>
using namespace std;

void people()
{
	// Title
	cout << "\t *** Intruder *** \n\n";

	cout << " Make your way to the exit by going ";
	cout << "\n through each stage and choosing the ";
	cout << "\n best choice possible. \n";

	cout << "\n **** ****		**** **** \n\n";
}

void q()
{
	
	cout << " Sam: Any new cases for today? ";

	cout << "\n\n Dean: Nothing for once, wow great day. ";

	cout << "\n\n Sam: Ok.. so what are we doing then.";

	cout << "\n\n Dean: Today we have to visit a few places ";
	cout << "\n and first is going to be the mall and ";
	cout << "\n then to a bar. ";

	cout << "\n\n Sam: Lets get a move on.";
	cout << "\n\n ** 9:19am leaving base ** \n\n";

	system("pause");
}

void w()
{
	string userChoice;
	getline(cin, userChoice);

	cout << "\n\n Sam: Did they remodel the mall? ";

	cout << "\n\n Dean: Honestly, probably. I havent ";
	cout << "\n seen so much action in one place. ";

	cout << "\n\n Sam: Action? oh the ladies.";
	cout << "\n of course.";

	cout << "\n\n Dean: Last one to get a number ";
	cout << "\n has to buy the beer...?";

	cout << "\n\n Sam: Heh, Your on. ";
	cout << "\n Dude did we just miss the turn? ";

	cout << "\n\n Dean: Look. \n";

	// input road sign function?
	roadSign();


	system("pause");
}

void e()
{
	string userChoice;
	getline(cin, userChoice);

	cout << "\n";



	cout << " \n";
	system("pause");
}

//finish the story
void r()
{
	string userChoice;
	getline(cin, userChoice);

	cout << "Whats your name kid? ? \n";

	cin >> userChoice;

	cout << "This is going to be a wild one " << userChoice << " \n\n";

	cout << "*********************";

}

void roadSign()
{
	cout << "\n ******************************* ";

	cout << "\n\n K E E P	S T R A I G H T ";
	cout << "\n\n M A L L	2	 M I L E S ";
	cout << "\n\n G A S		5	 M I L E S ";
	cout << "\n\n T O W N   1 0  M I L E S \n\n";

	cout << " ******************************* \n\n";

	cout << " ** 9:46am Entering the Mall ** \n\n";

	system("pause");
}
