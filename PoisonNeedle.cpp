/*
 * File:   PoisonNeedle.cpp
 * Author: Wilgens <wilgens21@gmail.com>
 *
 * Created on February 3, 2019, 7:37 PM

 Change needle behavior

Did not read instructions carefully, so the needle's hitpoint needed to be chang
ed to 1 and when it hits armor less than 5 it will ignore armor and deal 99 damage.
 */

#include "PoisonNeedle.h"

double PoisonNeedle::hit(double armor)
{
  double damage = hitPoints - armor;

  if(armor < 5)
    return 99.0;
  else if(damage < 0)
    return 0;

    return damage;
}
