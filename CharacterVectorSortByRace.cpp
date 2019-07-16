/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#include "CharacterVectorSortByRace.h"

CharacterVectorSortByRace::CharacterVectorSortByRace(CharacterVector &cv) {
  // Copies a CharacterVector's vector list to the new vector list.
  for (int i = 0; i < cv.getSize(); i++) {
    m_Characters.push_back(cv.getCharacter(i));
  }
}

bool CharacterVectorSortByRace::smaller(int i, int j) const {
  /* Compares the race at the two given indices to see which comes first in the
   * alphabet.
   * Arguments: i/j: indices of Characters to compare
   * Return: True if the Character at index i has a race that comes first in the
   * alphabet, false otherwise.
   */
  if (m_Characters[i]->getRace() < m_Characters[j]->getRace()) {
    return true;
  } else {
    return false;
  }
}