// Main program for lost_night text based
// RPG

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "Menu.h"

using namespace std;

int main()
{
	cout << "Lost Night" << endl;
	
    return 0;
}

/* Player Member Functions */
std::string Player::get_name() const
{
    return name;
}

std::string Player::get_job() const
{
    return job;
}


/* Menu Member Functions */

Menu::Menu()
{
    options.push_back("New Game");
    options.push_back("Load Game");
    options.push_back("Credits");
}

void Menu::display_options() const
{
    std::vector<std::string>::size_type i;
    for (i = 0; i < options.size(); i++) {
        cout << i+1 << ")" << options[i] << endl;
    }
}
