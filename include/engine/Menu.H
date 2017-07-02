// Start Menu for Lost Night

#ifndef GUARD_Menu_h
#define GUARD_Menu_h

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
