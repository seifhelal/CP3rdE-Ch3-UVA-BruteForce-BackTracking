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

map <int, vector <int>>  dis, time_leaving, time_away, new_dis;
int res=0;

int recurs(int counter, int time, int inp_required, int checker)
{
    if (counter !=0 && checker==inp_required)
    {
        return 9999;
    }
    
    for (int i=0; i < dis[inp_required].size(); i++)
    {
        if (time >= time_leaving[inp_required][i] && time <= time_leaving[inp_required][i]+ time_away[inp_required][i])
            return recurs(++counter, time, new_dis[inp_required][i], checker);
    }
    return inp_required;
}



int main ()
{
    int n, d, tl,ta, nd;
    cin >> n;
    
    cout << "CALL FORWARDING OUTPUT" << endl;
    int counter=0;
    while (n--)
    {
        cout << "SYSTEM " << ++counter << endl;
        cin >> d;
        while (d !=0){
            cin >> tl >> ta >> nd;
            dis[d].push_back(d); time_leaving[d].push_back(tl); time_away[d].push_back(ta);  new_dis[d].push_back(nd);
            cin >> d;
        }
        cin >> tl;
        while (tl!=9000)
        {
            cin >> d;
            printf("AT %04d CALL TO %04d RINGS %04d\n", tl, d, recurs(0, tl, d, d));
            cin >> tl;
        }
        if (n)
        {
            dis.clear(); time_leaving.clear(); time_away.clear(); new_dis.clear();
        }
    }
    cout << "END OF OUTPUT" << endl;
}




/*
 
 2
 1111 0100 0200 2222
 1111 0301 0500 4444
 2222 0200 0200 3333
 3333 0250 1000 1111
 7777 1000 2000 7777
 0000
 0050 1111
 0150 1111
 0200 1111
 0225 2222
 0270 1111
 0320 1111
 0320 3333
 0900 3000
 1250 3333
 1250 7777
 9000
 0000
 3000 1111
 9000
 
 
 */

















