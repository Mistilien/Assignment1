/*
 * File:   CrazyRandomSword.cpp
 * Author: Wilgens <wilgens21@gmail.com>
 *
 * Created on February 3, 2019, 6:38 PM
 */

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <ctime>

double CrazyRandomSword::hit(double armor)
{
  srand(time(0));

  hitPoints = (rand() % 94) + 7;
  int ignoreArmor = (rand() % 99) + 2;

  while(ignoreArmor > (armor/3))
    ignoreArmor = (rand() % 99) + 2;


  double damage = hitPoints - (armor - ignoreArmor);

  if(damage < 0)
    return 0;

    return damage;
}
