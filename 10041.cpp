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
    int n, np, temp;
   
    cin >> n;
    
    while (n--)
    {
        priority_queue<int> pq, copy;
        cin >> np;
        for (int i=0; i <np; i++)
        {
            cin >> temp;
            pq.push(temp);
        }
        copy=pq;
        for (int i=0; i < np/2; i++)
        {
            copy.pop();
        }
        temp=copy.top();
        int sum=0;
        //cout <<"house  " << temp << endl;
        for (int i=0; i < np; i++)
        {
            if (i != (np/2) )
                sum+= abs(temp-pq.top());
            pq.pop();
        }
        cout << sum << endl;
    }
}


/*

 
 
2
2 2 4
3 2 4 6

 */









