// Main program for lost_night text based
// RPG

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "Menu.h"

using namespace std;

int player_choice();
void game_runner();
int process_choice(int input);


int main()
{
    game_runner(); 
    
    return 0;
}

void game_runner() 
{
    int input;

    Menu title;
	
    cout << "Lost Night" << endl;
    title.display_options(); 
    
    input = player_choice();
    process_choice(input);
}

int player_choice()
{
    int value;
    
    cin >> value;
    return value;
}

int process_choice(int input)
{
    switch (input) {
        case 1:
            cout << "NEW GAME SELECTED" << endl;
            break; 
        case 2:
            cout << "LOAD GAME SELECTED" << endl;
            break;
        case 3:
            cout << "CREDITS" << endl;
            break;
        default:
            cout << "BAD INPUT" << endl;
            break;
    }

    return 0;
}

