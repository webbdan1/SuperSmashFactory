/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H
#include "Character.h"

class CharacterFactory {
  virtual Character* createCharacter(const string &data) = 0;
protected:
  CharacterFactory() = default;
};

#endif /* CHARACTERFACTORY_H */
