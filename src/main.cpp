// Main program for lost_night text based
// RPG

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "Menu.h"

using namespace std;

int player_choice();

int main()
{
    Menu title;
	
    cout << "Lost Night" << endl;
    title.display_options(); 
    
    cout << player_choice() << endl;
	
    return 0;
}

int player_choice()
{
    int input;
    
    cin >> input;
    return input;
}
