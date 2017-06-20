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

int arr[8][8];
pair <int, int> poses[8];
int res;

bool validate (int column, int row1)
{
    for (int i=0; i < column; i++)
    {
        if (poses[i].first== column || poses[i].second==row1) return false;
        if (abs(poses[i].first- column) == abs(poses[i].second-row1)) return false;
    }
    return true;
}

void recurse (int row)
{
    if (row==8 )
    {
        int sum=0;
        for (int i=0; i < 8; i++)
            sum+=arr[poses[i].first][poses[i].second];
        res=max(res,sum);
        return;
    }
    for (int column =0; column < 8 ; column++){
        if (validate(row, column))
            {
                poses[row] = make_pair(row, column);
                recurse(row+1);
            }}
}

int main()
{
    
    int n;
    cin >> n ;
    while (n--)
    {
        
        for (int i=0; i < 8; i++)
            for (int j=0; j < 8; j++)
                cin >> arr[i][j];
        res=0;
        recurse(0);
         printf("%5d\n", res);
    }
   
}




/*

 
 
3
5 1 1
10
10
2 2 3
20
 10
 10
 10
 15
 3 5 5
 50
 40
 30
 40
 50
 50
 30
 30
 20
 60

 
 
 */


















