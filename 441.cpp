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
    int k, temp;
    cin >> k;
    while (k!=0)
    {
        priority_queue<int> pq;
        int arr[k];
        for (int i=0; i < k; i++)
        {   cin >> temp;
            pq.push(temp);}
        for (int i=k-1; i >= 0; i--)
        {   arr[i]=pq.top();
            //cout << arr[i]  << endl;
            pq.pop();}
        
        for (int i=0; i < k-5; i++)
            for (int j=i+1; j < k-4; j++)
                for (int h=j+1; h < k-3; h++ )
                    for (int m=h+1; m < k-2; m++)
                        for (int v=m+1; v < k-1; v++)
                            for (int x=v+1; x < k; x++)
                                 cout << arr[i] << " " << arr[j] << " " << arr[h]<< " " << arr[m]<< " " << arr[v]<< " " << arr[x] << endl;
      
        cin >>k;
        if (k !=0)
            cout << endl;
    }
}


/*

 
 
2
2 2 4
3 2 4 6

 */









