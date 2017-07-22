/* 
 * Virtual class for enemies in game.
 *
 * Author: Cyrus Ramavarapu
 * Date: 22 July 2017
 */


#ifndef GUARD_ENEMY_H
#define GUARD_ENEMY_H
#include <string>

class Enemy
{
public:
    Enemy(int hp, int mp, int str, int def, std::string name):
          hit_points(hp), magic_points(mp),
          strength(str), defense(def), name(name) {}
    int get_hp() const { return hit_points; }
    int get_mp() const { return magic_points; }
    int get_str() const { return strength; }
    int get_def() const { return defense; }
    
    std::string get_name() const { return name; }

    virtual int attack();
    virtual int defend();
    
    virtual ~Enemy();
private:
    int hit_points;
    int magic_points;
    int strength; 
    int defense;
    std::string name;
};
#endif
