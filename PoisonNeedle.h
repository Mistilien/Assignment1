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
 * Defines the behavior of a Poison needle (hitpoint = 1, If the armor is less than 5, the needle will instead deal 99 hitpoints.
)
 */

 class PoisonNeedle: public Weapon
 {
    public:
      PoisonNeedle() : Weapon("Poison Needle",1) //Calls Weapon(name, hitpoints) constructor with values Poison Needle and 0
      {
      }

      virtual ~PoisonNeedle() {};

      virtual double hit(double armor);

      double hit();

 };

 #endif /* POISONNEEDLE_H */
