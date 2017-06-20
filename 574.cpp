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

int total, n;
int inp[20];
int used[20];
map <vector<int> ,int> checker;
bool flag=true;
void recurse (int counter, int counter2)
{
    if (counter==total)
    {
        flag=false;
        vector <int> vec;
        for (int i=0; i < n; i++)
            if (used[i])
                vec.push_back(inp[i]);
        if (checker[vec] != 10)
        {
            cout << vec[0];
            for (int i=1; i < vec.size(); i++)
                cout << '+'<< vec[i];
            if (total !=0)
                cout << endl;
            checker[vec]=10;
        }
        return;
    }
    for (int i=counter2; i < n; i++)
    {
        if (counter+inp[i] <= total && !used[i])
        {
            used[i]=true;
            recurse(counter+inp[i], counter2+1);
            used[i]=false;
        }
    }
}
int main ()
{
    
    cin >> total;
    while (total>0)
    {
        cin >> n;
        cout << "Sums of " << total << ':' << endl;
        for (int i=0; i < n; i++)
            cin >> inp[i];
        fill (used, used+20, false);
        recurse(0,0);
        cin >> total;
        if (flag==true)
        { cout << "NONE";
            if (total !=0)
                cout << endl;
        }
        flag=true;
        
        
    }
}



/*
 4 6 4 3 2 2 1 1
  */

















