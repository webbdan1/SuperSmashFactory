/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTERVECTORSORTBYHAIR_H
#define CHARACTERVECTORSORTBYHAIR_H
#include "CharacterVectorSortable.h"

class CharacterVectorSortByHair : public CharacterVectorSortable {
public:
  CharacterVectorSortByHair() = default;
  CharacterVectorSortByHair(CharacterVector &cv);
  CharacterVectorSortByHair(const CharacterVectorSortByHair &orig) = default;
  virtual ~CharacterVectorSortByHair() = default;
  
  virtual bool smaller(int i, int j) const;
};

#endif /* CHARACTERVECTORSORTBYHAIR_H */

