/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef SMALLCHARACTER_H
#define SMALLCHARACTER_H
#include "Character.h"

class SmallCharacter: public Character {
protected:
  bool m_isEquipped;
  virtual string getSpecial() const;

public:
  SmallCharacter();
  SmallCharacter(const SmallCharacter& orig) = default;
  virtual ~SmallCharacter() = default;

  bool getisEquipped() const;
  void setisEquipped(bool is_equipped);
};

#endif /* SMALLCHARACTER_H */

