/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "CharacterVector.h"

unsigned int CharacterVector::getSize() const {
  return m_Characters.size();
}

void CharacterVector::insertCharacter(Character *c) {
  m_Characters.push_back(c);
}

Character* CharacterVector::getCharacter(int i) const {
  // Returns the character at the given index.
  return m_Characters[i];
}

void CharacterVector::print() {
  // Calls the print function of each Character in the vector.
  for (int i = 0; i < m_Characters.size(); i++) {
    m_Characters[i]->print();
  }
}
