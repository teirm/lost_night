/*
 * Skeleton Soldier Class.
 *
 * Author: Cyrus Ramavarapu
 * Date: 22 July 2017
 */

#ifndef SKELETON_SOLDIER_GUARD
#define SKELETON_SOLDIER_GUARD

#include "Enemy.H"


class SkeletonSoldier : Enemy
{
public:
    SkeletonSoldier(int hp, int mp, int str, int def, std::string name):
            Enemy(hp, mp, str, def, name) {}

    int attack();
    int defend();

    int battle_cry();
    int double_attack();

    virtual ~SkeletonSoldier();
private:
};
#endif
