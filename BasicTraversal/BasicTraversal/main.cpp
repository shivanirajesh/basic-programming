//
//  main.cpp
//  BasicTraversal
//
//  Created by Shivani Rajesh on 28/02/23.
// LINEAR SEARCH

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int linear_search(vector<int>arr,int val);


int main()
{
    
    vector<int> arr = { 0,8,5,8,9,3,0,7,12,67};
    
    int index = linear_search(arr, 8);
    
    cout << "index is " << index << endl;
    
}




    int linear_search(vector<int>arr,int val)
    {
        for(int i  = 0; i<arr.size(); i++)
        {
            if(val  == arr[i])
            {
                return i;
        }   }
            return -1;
    }
    
   
    

