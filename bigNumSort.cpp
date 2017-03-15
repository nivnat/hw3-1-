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
   
    //cout<<"yes";
    int dig=0, max=0;
    
    for(int i=0;i<data.size();i++)
    {
        dig=data[i].digits.size();
        if(max<dig)
        {
            max=dig;
        }
    } 
    //bigNum final[data.size()]; 
    vector<bigNum>final(data.size());
    for(dig=0;dig<max;dig++)
    {

        for(int i=0;i<10;i++)
        {
                bucket[i]=0;
        }
        for(int ii=0;ii<data.size();ii++)
        {
            if(data[ii].numDigits()<dig+1)
            {
                //cout<<data[ii].numDigits();
               // cout<<dig;
                bucket[0]++; //eg: 
            }
            else
            {
                bucket[data[ii].digits[dig]]++;
            }
        }
                
        for (int ii=1; ii<10; ii++)
            bucket[ii] += bucket[ii-1];

        for(int j=data.size()-1;j>=0;j--)
        {
            if(data[j].digits.size()<dig+1)
                final[--bucket[0]]=data[j];
            else
            {
                final[--bucket[data[j].digits[dig]]]=data[j];

            }
        }
        
        for(int k=0;k<data.size();k++)
        {
            data[k]=final[k];
        }
        
    }
}
