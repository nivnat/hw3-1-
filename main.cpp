//
// Created by Ari on 2/28/17.
//

#include "bigNum.h"
#include "genericSort.h"
#include "bigNumSort.h"

using namespace std;

int main(int argc, char **argv) {
    bigNumSort testSorter;

    // insert items into the data structure
    testSorter.insert(3);
    testSorter.insert(1);
    testSorter.insert(4);
    testSorter.insert(1);
    testSorter.insert(5);

    // perform sort
    testSorter.performSort();

    // print out the results
    for (int ii=0; ii<testSorter.numItems(); ii++)
        cout << "The " << ii << "-th item in sorted order is " << testSorter[ii] << endl;
}