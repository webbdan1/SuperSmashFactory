/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "BigCharacter.h"

string BigCharacter::getSpecial() const {
  // Returns a string for the print() function in the abstract Character class
  string special = "Skill: " + getSkill();
  return special;
}

BigCharacter::BigCharacter() {
  // Set default values to all attributes with big as the size
  m_Name = "";
  m_Weight = 0.0;
  m_Speed = "";
  m_Hair = 0;
  m_Race = "";
  m_Size = "big";
}

string BigCharacter::getSkill() const {
  return m_Skill;
}

void BigCharacter::setSkill(string skill) {
  m_Skill = skill;
}

