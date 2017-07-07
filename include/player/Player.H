// Player.h
// Class and methods associated with the player

#ifndef GUARD_Player_h
#define GUARD_Player_h

#include <string>

class Player
{
public:
    Player();
    Player(std::string name,
           int age,
           int money):
           name(name), age(age), money(money) { } 
    virtual ~Player();
    std::string get_name() const;
    std::string get_job() const;        
    int get_age() const;
    int get_money();
private:
    int money;
    int age;
    std::string name; 
    std::string job;
};
#endif
