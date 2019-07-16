/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "SmallCharacter.h"
#include <iostream>
using std::cout; using std::endl;

string SmallCharacter::getSpecial() const {
  // Returns a string for the print() function in the abstract Character class
  if (getisEquipped()) {
    return "IsEquipped: 1";
  } else {
    return "IsEquipped: 0";
  }
}

SmallCharacter::SmallCharacter() {
  // Set default values for all attributes with small as the size
  m_Name = "";
  m_Weight = 0.0;
  m_Speed = "";
  m_Hair = 0;
  m_Race = "";
  m_Size = "small";
}

bool SmallCharacter::getisEquipped() const {
  return m_isEquipped;
}

void SmallCharacter::setisEquipped(bool is_equipped) {
  m_isEquipped = is_equipped;
}
