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
    int n, num;
    cin >> n;
    
    while (n--)
    {
        cin >> num;
        int arr[num];
        int sum=0;
        for (int i=0 ; i < num; i++)
        {
            cin >> arr[i];
            for (int j =0; j < i; j++)
            {
                if (arr[j] <= arr[i])
                    sum++;
            }
        }
        cout << sum << endl;
    }
}













