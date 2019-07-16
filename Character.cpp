/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "Character.h"

string Character::getName() const {
  return m_Name;
}

void Character::setName(const string &name) {
  m_Name = name;
}

double Character::getWeight() const {
  return m_Weight;
}

void Character::setWeight(const double &weight) {
  m_Weight = weight;
}

string Character::getSpeed() const {
  return m_Speed;
}

void Character::setSpeed(const string &speed) {
  m_Speed = speed;
}

double Character::getHair() const {
  return m_Hair;
}

void Character::setHair(const double &hair) {
  m_Hair = hair;
}

string Character::getRace() const {
  return m_Race;
}

void Character::setRace(const string &race) {
  m_Race = race;
}

string Character::getSize() const {
  return m_Size;
}

void Character::setSize(const string &size) {
  m_Size = size;
}

void Character::print() {
  // Prints out the character as described in the Project 1 specs.

  printf("Name: %-12s Size: %-8s Weight: %-8.1f Speed: %-2s HairLen: %-8.1f \
    Race: %-12s %-30s\n", m_Name.c_str(), m_Size.c_str(), m_Weight, \
    m_Speed.c_str(), m_Hair, m_Race.c_str(), getSpecial().c_str());
}