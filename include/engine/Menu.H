// Start Menu for Lost Night

#ifndef GUARD_MENU_H
#define GUARD_MENU_H

#include <string>
#include <vector>
class Menu
{
private:
    std::vector<std::string> options;             
public:
    Menu();
    void display_options() const;  
};
#endif
