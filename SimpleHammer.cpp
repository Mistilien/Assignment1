/*
 * File:   SimpleHammer.cpp
 * Author: Wilgens <wilgens21@gmail.com>
 *
 * Created on February 3, 2019, 6:00 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
  double damage = hitPoints - armor;

  if(armor < 30)
    return hitPoints;
  if else(damage < 0)
    return 0;

    return damage;
}
