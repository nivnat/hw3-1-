//
// Created by Ari on 2/28/17.
// A sample bigNumSort class for you to modify.
//

#include "genericSort.h"
#include "bigNumSort.h"

void bigNumSort::performSort() 
{
    // A simple implementation of bubble sort
    /*
    for (int ii=0; ii<data.size(); ii++)
        for (int jj=0; jj<data.size(); jj++)

            // compare items at index ii and jj and swap if needed
            if (!(data[jj] <= data[ii])) 
            {
                // swap the two locations
                bigNum temp(this->data[ii]);
                data[ii]=data[jj];
                data[jj]=temp;
            }
    */
    int bucket[10];
    vector<bigNum>final(data.size());
    int dig=0;

    while(true)
    {

        for(int i=0;i<10;i++)
            bucket[i]=0;

        for(int ii=0;ii<data.size();ii++)
        {
            if(data[ii].numDigits()<dig)
                bucket[0]++; //eg: 
            else
            {
                bucket[data[ii].numDigits()]++;
            }
        }

        if(bucket[0]==data.size())
            break;

        for (int ii=1; ii<10; ii++)
            bucket[ii] = bucket[ii] + bucket[ii-1];

        for(int j=data.size()-1;j>=0;j--)
        {
            if(data[j].numDigits()<dig)
                final[--bucket[0]]=data[j];
            else
            {
                final[--bucket[data[j].numDigits()]=data[j]];

            }
        }
        data=final;
        dig++;
    }
}