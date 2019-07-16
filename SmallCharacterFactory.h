/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef SMALLCHARACTERFACTORY_H
#define SMALLCHARACTERFACTORY_H
#include "CharacterFactory.h"

class SmallCharacterFactory : public CharacterFactory {
public:
  SmallCharacterFactory() = default;
  SmallCharacterFactory(const SmallCharacterFactory &scf) = default;
  virtual ~SmallCharacterFactory() = default;
  
  Character* createCharacter(const string &data);
};

#endif /* SMALLCHARACTERFACTORY_H */
