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

bool valid(long x)
{
    map<int, int> v;
    for (int i=0; i < 10; i++)
        v[i]=i;
    long temp;
    while (x != 0 )
    {
        temp=x%10;
        if (v[temp] != -1)
            v[temp]=-1;
        else
            return false;
        x=x/10;
    }
    return true;
}

int main()
{
    long long max =9876543210, num, test;
    int n;
    cin >> n;
    
    while (n--)
    {
        cin >> num;
        test=max/num;
        for (long i=1; i <= test; i++)
        {
            if (valid(i) && valid (i*num))
                printf("%llu / %llu = %llu\n",num*i,i,num);
        }
        if(n)
            putchar('\n');
    }
    
    
}


/*

 
 
2
2 2 4
3 2 4 6

 */









