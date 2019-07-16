/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "CharacterVectorSortBySpeed.h"

CharacterVectorSortBySpeed::CharacterVectorSortBySpeed(CharacterVector &cv) {
  // Copies a CharacterVector's vector list to the new vector list.
  for (int i = 0; i < cv.getSize(); i++) {
    m_Characters.push_back(cv.getCharacter(i));
  }
}

bool CharacterVectorSortBySpeed::smaller(int i, int j) const {
  /* Compares the speed at the two given indices to see which is smaller.
   * Arguments: i/j: indices of Characters to compare
   * Return: True if the Character at index i is slower, otherwise false.
   */
  if (stoi(m_Characters[i]->getSpeed()) < stoi(m_Characters[j]->getSpeed())) {
    return true;
  } else {
    return false;
  }
}
