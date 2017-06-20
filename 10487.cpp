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
    int n, m, cas;
    cin >> n;
    int c=1;
    while ( n !=0 )
    {
        int arr[n];
        for (int i=0; i < n; i++)
            cin >> arr[i];
        cin >> m;
        cout << "Case " << c << ':' << endl;
        c++;
        for (int i=0; i < m; i++)
        {
            cin >> cas;

            cout << "Closest sum to " << cas << " is ";
            int min1=arr[0], min2=arr[1];
            for (int j=0; j < n; j++)
            {
                for (int k=0; k < n; k++)
                {
                    if (abs (arr[k]+arr[j]-cas) < abs(min1+min2-cas) && j!=k)
                    {
                        min1=arr[k];
                        min2=arr[j];
                    }
                }
            }
            cout << min1+min2 << "." << endl;
        }
        cin >>n;

    }
}


/*
 
 5
 3
 12
 17
 33
 34
 3
 1
 51
 30
 0
 
 
 
 2
 100000
 100001
 1
 1
 0
 0

 */









