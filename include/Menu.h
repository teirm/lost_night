// Start Menu for Lost Night

#ifndef GUARD_Menu_h
#define GUARD_Menu_h

#include <string>
#include <vector>
class Menu
{
private:
    Menu();
    std::vector<std::string> options;             
public:
    void display_options() const;  
};
#endif
