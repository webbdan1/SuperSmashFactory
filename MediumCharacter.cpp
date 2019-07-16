/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "MediumCharacter.h"

string MediumCharacter::getSpecial() const {
  // Returns a string for the print() function in the abstract Character class
  string special = "Weapon: " + getWeapon();
  return special;
}

MediumCharacter::MediumCharacter() {
  // Set default values to all attributes with med as the size
  m_Name = "";
  m_Weight = 0.0;
  m_Speed = "";
  m_Hair = 0;
  m_Race = "";
  m_Size = "med";
}

string MediumCharacter::getWeapon() const {
  return m_Weapon;
}

void MediumCharacter::setWeapon(string weapon) {
  m_Weapon = weapon;
}

