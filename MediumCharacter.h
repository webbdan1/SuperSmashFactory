/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef MEDIUMCHARACTER_H
#define MEDIUMCHARACTER_H
#include "Character.h"

class MediumCharacter: public Character {
protected:
  string m_Weapon;
  virtual string getSpecial() const;

public:
  MediumCharacter();
  MediumCharacter(const MediumCharacter &orig) = default;
  virtual ~MediumCharacter() = default;

  string getWeapon() const;
  void setWeapon(string weapon);
};

#endif /* MEDIUMCHARACTER_H */

