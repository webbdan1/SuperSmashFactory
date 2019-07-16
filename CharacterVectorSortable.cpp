/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "CharacterVectorSortable.h"

unsigned int CharacterVectorSortable::getSize() const {
  // Returns the amount of Character pointers that are in the vector
  return m_Characters.size();
}

void CharacterVectorSortable::swap(int i, int j) {
  // Swaps two Character pointers within the vector.
  Character *temp = m_Characters[i];
  m_Characters[i] = m_Characters[j];
  m_Characters[j] = temp;
}