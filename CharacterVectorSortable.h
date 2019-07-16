/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTERVECTORSORTABLE_H
#define CHARACTERVECTORSORTABLE_H
#include "CharacterVector.h"
#include "SortableVector.h"

class CharacterVectorSortable : public CharacterVector, public SortableVector {
protected:
  CharacterVectorSortable() = default;
  CharacterVectorSortable(const CharacterVectorSortable &orig) = default;
  virtual ~CharacterVectorSortable() = default;
  
public:
  virtual unsigned int getSize() const;
  virtual void swap(int i, int j);

};

#endif /* CHARACTERVECTORSORTABLE_H */

