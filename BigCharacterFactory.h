/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef BIGCHARACTERFACTORY_H
#define BIGCHARACTERFACTORY_H
#include "CharacterFactory.h"

class BigCharacterFactory : public CharacterFactory {
public:
  BigCharacterFactory() = default;
  BigCharacterFactory(const BigCharacterFactory &bcf) = default;
  virtual ~BigCharacterFactory() = default;
  
  Character* createCharacter(const string &data);
};

#endif /* BIGCHARACTERFACTORY_H */
