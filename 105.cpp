//
//  main.cpp
//  khamsa_mwah
//
//  Created by SEIF on 5/23/17.
//  Copyright © 2017 SEIF. All rights reserved.
//
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>

#include<cstdio>
#include <string>
#include <iostream>
#include <iomanip>
#include <map>
#include <sstream>
#include <stack>
#include <deque>
#include <set>
#include <queue>
#include <list>
#include <algorithm>
#include <string.h>
#include <cstdio>
//#include "UFDS.h"

using namespace std;
typedef vector<int> vi;



int main()
{
    int height[100000], left[100000], right[100000], sky[100000], maxr=0;
    deque<int> outt;
    int f=0;
    
    while (cin >> left[f]>>height[f] >> right[f] && left[f]!=-5)
    {
        for (int j=left[f]; j < right[f]; j++)
        {
            if (sky[j] < height[f])
                sky[j]=height[f];
        }
        if (right[f] >maxr)
            maxr=right[f];
        f++;
    }
    int temp=0;
    for (int i=0; i <= maxr; i++)
    {
        if (temp!=sky[i])
        {
            outt.push_back(i);
            outt.push_back(sky[i]);
            temp=sky[i];
        }
    }
    cout << outt[0];
    for (int i=1; i < outt.size();  i++)
    {
        cout <<" " <<  outt[i];
    }
    cout << endl; 
    
}














