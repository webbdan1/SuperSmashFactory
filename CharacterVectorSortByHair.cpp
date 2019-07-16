/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "CharacterVectorSortByHair.h"

CharacterVectorSortByHair::CharacterVectorSortByHair(CharacterVector &cv) {
  // Copies a CharacterVector's vector list to the new vector list.
  for (int i = 0; i < cv.getSize(); i++) {
    m_Characters.push_back(cv.getCharacter(i));
  }
}
bool CharacterVectorSortByHair::smaller(int i, int j) const {
  /* Compares the hair length at the two given indices to see which is smaller.
   * Arguments: i/j: indices of Characters to compare
   * Return: True if the Character at index i has shorter hair, false otherwise.
   */
  if (m_Characters[i]->getHair() < m_Characters[j]->getHair()) {
    return true;
  } else {
    return false;
  }
}
