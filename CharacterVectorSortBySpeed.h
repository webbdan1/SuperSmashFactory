/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTERVECTORSORTBYSPEED_H
#define CHARACTERVECTORSORTBYSPEED_H
#include "CharacterVectorSortable.h"

class CharacterVectorSortBySpeed : public CharacterVectorSortable {
public:
  CharacterVectorSortBySpeed() = default;
  CharacterVectorSortBySpeed(CharacterVector &cv);
  CharacterVectorSortBySpeed(const CharacterVectorSortBySpeed &orig) = default;
  virtual ~CharacterVectorSortBySpeed() = default;

  virtual bool smaller(int i, int j) const;

};

#endif /* CHARACTERVECTORSORTBYSPEED_H */

