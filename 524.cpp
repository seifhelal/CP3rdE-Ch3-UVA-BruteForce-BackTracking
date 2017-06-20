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

int result[20];
bool checked[20];







bool isprime(int p) {
    for(int i = 2; i <= sqrt(p); i++)
        if(p % i == 0) return false;
    return true;
}


void recurse(int counter, int number, int max)
{
    if (counter==max-1 && isprime(result[max]+result[max-1]))
    {
        cout << result[0];
        for (int i=1; i < max; i++)
            cout <<" " << result[i];
        cout << endl;
        return;
    }
    
    for (int i= 2; i <= max; i++)
    {
            if (isprime (result[counter]+i)&& !checked[i])
            {
                result[counter+1]=i;
                checked[i]=true;
                recurse(counter+1, i, max);
                checked[i]=false;
            }
    }
}

int main ()
{
    
    int n, c=1;
    while (cin >> n)
    {
        if (c!=1)
            cout << endl;
        cout << "Case " << c++ << ':' << endl;
        result[0]=1;
        result[n]=1;
        fill(checked, checked+20, false);
        recurse(0, 0 , n);
    }
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

















