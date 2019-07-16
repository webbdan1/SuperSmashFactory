/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef MEDIUMCHARACTERFACTORY_H
#define MEDIUMCHARACTERFACTORY_H
#include "CharacterFactory.h"

class MediumCharacterFactory : public CharacterFactory {
public:
  MediumCharacterFactory() = default;
  MediumCharacterFactory(const MediumCharacterFactory &mcf) = default;
  virtual ~MediumCharacterFactory() = default;
  
  Character* createCharacter(const string &data);
};

#endif /* MEDIUMCHARACTERFACTORY_H */
