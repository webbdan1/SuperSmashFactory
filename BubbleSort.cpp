/*******************************************************************************
* Daniel Webb and Patrick Renner
* Project 1
*******************************************************************************/

/*
 Code inspired from MSU SS19 CSE335 Lecture 9/10 and HW 9
 */

#include "BubbleSort.h"

void BubbleSort::sort(SortableVector *sv) {
  /*
  Uses a bubble sort algorithm to sort a vector of elements in increasing order.
  Parameter:
    sv: a SortableVector derived class object.
  */
  bool sorted = false;
  int n = sv->getSize();
  while (!sorted) {
    sorted = true;
    for(int i = 1; i < n; i++) {
      if(!sv->smaller(i-1, i)) {
        sv->swap(i-1, i);
        sorted = false;
      }
    }
    n--;
  }
}