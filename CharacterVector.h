/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

#ifndef CHARACTERVECTOR_H
#define CHARACTERVECTOR_H
#include "Character.h"
#include <vector>
using std::vector;

class CharacterVector {
protected:
  vector <Character*> m_Characters;
  
public:
  CharacterVector() = default;
  CharacterVector(const CharacterVector& orig) = default;
  virtual ~CharacterVector() = default;
  
  virtual unsigned int getSize() const;
  void insertCharacter(Character *c);
  Character* getCharacter(int i) const;
  void print();
};

#endif /* CHARACTERVECTOR_H */

