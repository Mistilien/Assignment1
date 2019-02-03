/*
 * File:   SimpleHammer.h
 * Author: Wilgens <wilgens21@gmail.com>
 *
 * Created on February 3, 2019, 6:00 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, If the armor is less than 30, the hammer will ignore all the armor points.
)
 */

 class SimpleHammer: public Weapon
 {
    public:
      SimpleHammer() : Weapon("Simple Hammer",25.0) //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
      {
      }

      virtual ~SimpleHammer() {};

      virtual double hit(double armor);

 };

 #endif /* SIMPLEHAMMER_H */
