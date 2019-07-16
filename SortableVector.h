/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

/*
 Code inspired from MSU SS19 CSE335 Lecture 9/10 and HW 9
 */

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector {
protected:
  SortableVector() = default;
  SortableVector(const SortableVector& orig) = default;
  virtual ~SortableVector() = default;

public:
  virtual unsigned int getSize() const = 0;
  virtual bool smaller(int i, int j) const = 0;
  virtual void swap(int i, int j) = 0;

};

#endif /* SORTABLEVECTOR_H */

