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
    int n, num_cof, d, k, number=1;
    long long temp=0;
    cin >> n;
    
    while (n--)
    {
        cin >> num_cof;
        int arr[num_cof];
        for (int j=0; j <= num_cof; j++)
            cin>>arr[j];
        cin >> d >> k;
        temp=0;
        number=0;
        while (temp < k)
        {
            number++;
            temp+= (d*number);
        }
        
        temp=0;
        for (int h=0; h <= num_cof; h++)
        {
            temp+= arr[h]*pow(number, h);
        }
        cout << temp << endl;
    }
 
}
















