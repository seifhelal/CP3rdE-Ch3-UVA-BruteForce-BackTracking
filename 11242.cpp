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
    int f, r, temp;
    int c=0;
    
    
    cin >> f;
    while ( f !=0 )
    {
        cin >> r;
        double front[f];
        priority_queue<double> pq;
        for (int i=0; i < f; i++)
            cin >> front[i];
        for (int j=0; j < r; j++)
        {
            cin >> temp;
            for (int i=0; i < f; i++)
            {
                pq.push(front[i]/temp);
            }
        }
        double max1, max2, MAX=0;
        max1=pq.top();
        for (int i=0; i < r*f; i++)
        {
            max2=max1;
            max1=pq.top();
            pq.pop();
            if (MAX < max2/max1)
                MAX=max2/max1;
            else if (MAX < max1/max2)
                MAX=max1/max2;
        }
        
        
        cout <<fixed <<setprecision(2)<<  MAX << endl;
        cin >>f;
    }
}


/*
2 4
40 50
12 14 16 19 0  
 

 */









