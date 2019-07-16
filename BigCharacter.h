/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef BIGCHARACTER_H
#define BIGCHARACTER_H
#include "Character.h"

class BigCharacter: public Character {
protected:
  string m_Skill;
  virtual string getSpecial() const;

public:
  BigCharacter();
  BigCharacter(const BigCharacter &orig) = default;
  virtual ~BigCharacter() = default;

  string getSkill() const;
  void setSkill(string skill);
};

#endif /* BIGCHARACTER_H */

