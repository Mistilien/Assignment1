/*
 * File:   PoisonNeedle.h
 * Author: Wilgens <wilgens21@gmail.com>
 *
 * Created on February 3, 2019, 7:37 PM
 */

#include <string>
#include "Weapon.h"

#ifndef POISONNEEDLE_H
#define POISONNEEDLE_H

/**
 * Defines the behavior of a Poison needle (hitpoint = 0, If the armor is 0, the needle will instead deal 99 hitpoints.
)
 */

 class PoisonNeedle: public Weapon
 {
    public:
      PoisonNeedle() : Weapon("Poison Needle",0) //Calls Weapon(name, hitpoints) constructor with values Poison Needle and 0
      {
      }

      virtual ~PoisonNeedle() {};

      virtual double hit(double armor);

 };

 #endif /* POISONNEEDLE_H */
