/*
 * File:   SimpleHammer.h
 * Author: Wilgens <wilgens21@gmail.com>
 *
 * Created on February 3, 2019, 6:38 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Crazy Random Sword (hitpoints = random integer number between 7 and 100. Ignores a random amount of integer armor points, ranging from to 2 to a third of the armor the weapon hits.
 */

 class CrazyRandomSword: public Weapon
 {
    public:
      CrazyRandomSword() : Weapon("Crazy Random Sword", 0) //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and 0
      {
      }

      virtual ~CrazyRandomSword() {};

      virtual double hit(double armor);

 };

 #endif /* CRAZYRANDOMSWORD_H */
