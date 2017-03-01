//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#include "genericSort.h"
#include "bigNumSort.h"

void bigNumSort::performSort() {
    // A simple implementation of bubble sort

    for (int ii=0; ii<data.size(); ii++)
        for (int jj=0; jj<data.size(); jj++)

            // compare items at index ii and jj and swap if needed
            if (!(data[jj] <= data[ii])) {
                // swap the two locations
                bigNum temp(this->data[ii]);
                data[ii]=data[jj];
                data[jj]=temp;
            }
}