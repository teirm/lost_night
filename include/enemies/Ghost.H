/*
 * Class for Ghost Enemy
 *
 * Author: Cyrus Ramavarapu
 * Date: 22 July 2017
 */

#ifndef GUARD_GHOST_H
#define GUARD_GHOST_H

#include "Enemy.H"
#include <player/Player.H>

class Ghost : Enemy
{
public:
    Ghost(int hp, int mp, int str, int def, std::string name):
        Enemy(hp, mp, str, def, name) {}
    
    void warp();

    int attack();
    int defend();
    int magic_attack();

    Player* possess();

    virtual ~Ghost();
private:
    Player* possessed;
};
#endif
