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

struct comparator {
    bool operator()(int i, int j) {
        return i > j;
    }
};



int root(int a, int b, int c){
    
    
    float  x1, x2, determinant, realPart, imaginaryPart;
    determinant = b*b - 4*a*c;
    
    if (determinant > 0) {
        x1 = (-b + sqrt(determinant)) / (2*a);
        x2 = (-b - sqrt(determinant)) / (2*a);
        return x1;
    }
    
    else if (determinant == 0) {
        x1 = (-b + sqrt(determinant)) / (2*a);
        return x1;
    }
    
    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-determinant)/(2*a);
    }
    
    return 0;
}



int main()
{
    int n;
    cin >>n;
    float a,b,c;
    vector<int> vec;
    while (n--)
    {
        cin >> a >> b>>c;
        int temp2=-abs(b-c);
        int min=100000;
        int y,z;
        for (float x=temp2 ; x <= c; x++)
            {
                y= root(1,x-a , b/x);
                z=a-x-y;
                if (x!=y && x!=z && z!=y && x+y+z==a && x*y*z==b && (pow(x,2)+pow(y,2)+pow(z,2)==c))
                    if (x < min || y < min || z || min)
                    {vec.clear();
                        vec.push_back(x);
                        vec.push_back(y);
                        vec.push_back(z);}
            }
        sort(vec.begin(), vec.end());
        if (!vec.empty()){
            cout  << vec[0];
        for (int i=1 ; i < 3; i++)
        {
            cout << " " << vec[i];
        }
            vec.clear();
            cout << endl;}
        else
            cout << "No solution." << endl;
    }
}

    
    



/*
 
2
1 2 3
6 6 14
 

 
 */









