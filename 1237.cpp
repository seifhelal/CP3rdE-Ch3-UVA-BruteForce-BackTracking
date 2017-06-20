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
    map<string, pair <int, int > > mymap;
    int t, num_cars, num_cases, temp;
    string str;
    cin >> t;
    
    for (int i=0; i < t; i++)
    {
        if (i!=0)
            cout << endl;
        cin >> num_cars;
        int min = 1000000000;
        for (int j=0; j < num_cars; j++)
        {
            cin >> str;
            cin >> mymap[str].first >> mymap[str].second;
            if (mymap[str].first < min)
                min=mymap[str].first;
        }
        cin >> num_cases;
        cin.ignore();
        for (int j=0; j < num_cases; j++)
        {
            cin >> temp;
            if (temp < min)
                cout << "UNDETERMINED" << endl;
            else
            {
                int c=0;
                map<string, pair <int, int> >::iterator it;
                for (it=mymap.begin(); it!=mymap.end(); it++)
                {
                    if (temp >= it->second.first && temp <= it->second.second )
                    {
                        c++;
                        str=it->first;
                    }
                }
                if (c == 1 )
                    cout << str << endl;
                else
                    cout << "UNDETERMINED" << endl;
            }
        }
        mymap.clear();
    }
    
}














