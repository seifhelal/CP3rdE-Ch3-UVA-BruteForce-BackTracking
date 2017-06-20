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

pair <int , int > pieces[20], first, last;
pair <bool, bool > used[20];
int spaces, num;
bool result=false;


void recurse (int counter, int required)
{
    if (counter==spaces)
    {
        if (pieces[num+1].first==required)
            result=true;
        return;
    }
    
    for (int i=1; i <=num; i++)
    {
        if (pieces[i].first==required && !used[i].first)
        {
            used[i].first =true;
            recurse(counter+1, pieces[i].second);
            used[i].first=false;
        }
        else if (pieces[i].second==required && !used[i].first)
        {
            used[i].first =true;
            recurse(counter+1, pieces[i].first);
            used[i].first=false;
        }
    }
}


int main ()
{
    int cl=0;
    while(cin >> spaces && spaces!=0)
    {
        cin >> num;
        cin >> pieces[0].first >> pieces[0].second >> pieces[num+1].first >> pieces[num+1].second;
        used[0].first=false; used[0].second=false; used[num+1].first=false; used[num+1].second=false;
        for (int i=1; i < num+1; i++)
        {   cin >> pieces[i].first >> pieces[i].second;
            used[i].first=false; used[i].second=false;}
        result=false;
        recurse (0, pieces[0].second);
        if (result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cl++;
    }
}



/*

 
 3
 4
 0 1
 3 4
 2 1
 5 6
 2 2
 3 2
 
 2
 4
 0 1
 3 4
 1 4
 4 4
 3 2
 5 6 
 0 0
 
  */

















