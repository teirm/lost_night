// Player.h
// Class and methods associated with the player

#ifndef GUARD_Player_h
#define GUARD_Player_h

#include <string>

class Player
{
private:
    std::string name; 
    std::string job;
public:
    Player(); 
    std::string get_name() const;
    std::string get_job() const;        
};
#endif
