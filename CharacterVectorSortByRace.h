/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTERVECTORSORTBYRACE_H
#define CHARACTERVECTORSORTBYRACE_H
#include "CharacterVectorSortable.h"

class CharacterVectorSortByRace : public CharacterVectorSortable {
public:
  CharacterVectorSortByRace() = default;
  CharacterVectorSortByRace(CharacterVector &cv);
  CharacterVectorSortByRace(const CharacterVectorSortByRace &orig) = default;
  virtual ~CharacterVectorSortByRace() = default;
  
  virtual bool smaller(int i, int j) const;

};

#endif /* CHARACTERVECTORSORTBYRACE_H */

