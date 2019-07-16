/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

/*
 Code inspired from MSU SS19 CSE335 Lecture 9/10 and HW 9
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "SortableVector.h"

class BubbleSort {
public:
  BubbleSort() = default;
  BubbleSort(const BubbleSort& orig) = default;
  virtual ~BubbleSort() = default;
  
  void sort(SortableVector *sv);

};

#endif /* BUBBLESORT_H */

