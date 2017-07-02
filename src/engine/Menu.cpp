//Source code for the menu class
//Includes the member functions
/* Menu Member Functions */

#include <iostream>
#include <engine/Menu.H>

using namespace std;

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

    cout << endl << "Pick One" << endl << endl;
}

