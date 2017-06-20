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
vector<int> s;

int main()
{
    int m;
    string str;
    char temp;
    stringstream ss;
    while (cin >>m )
    {
        
        vector <pair<int, int>> ones, threes;
        for (int i=0; i < m; i++)
        {
            ss.clear();
            cin >> str;
            ss << str;
            for (int j=0; j <m; j++ )
            {
                ss >>temp;
                if (temp=='1')
                    ones.push_back(make_pair(i, j));
                else if (temp=='3')
                    threes.push_back(make_pair(i, j));
            }
        }
        int MN=0;
        while (!ones.empty())
        {
            vector <pair<int, int>> temps=threes;
            int min=10000000;
            while (!temps.empty())
            {
                if (abs(ones.back().first-temps.back().first) + abs(ones.back().second-temps.back().second) < min)
                    min=abs(ones.back().first-temps.back().first) + abs(ones.back().second-temps.back().second);
                temps.pop_back();
            }
            
            if (min > MN)
                MN=min;
            ones.pop_back();
        }
        cout << MN << endl;
    }
    
}


/*

 
 
4
1 2 2 3
2 1 2 3
2 2 1 3
3 2 1 2
2
1 2
3 3
 
 
3
1 2 2
2 3 2
2 2 2
 
 */









