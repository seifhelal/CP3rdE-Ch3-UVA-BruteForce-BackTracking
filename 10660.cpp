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

int arr[5][5];
int res[5];
int dis (int number, int i, int j)
{
    int temp=arr[i][j]*(abs(i-number/5)+abs(j-number%5));
    return temp;
}

int getval (int a, int b, int c, int d, int e)
{
    int t1, t2, t3, t4, t5, sum=0;
    for (int i=0; i < 5 ; i++)
        for (int j=0; j < 5; j++)
        {
            t1=dis(a, i, j);
            t2=dis(b, i, j);
            t3=dis(c, i, j);
            t4=dis(d, i, j);
            t5=dis(e, i, j);
            sum+= min (t1, min (t2, min (t3, min(t4, t5) ) ) );
        }
    return sum;
}

int main()
{
    int n, num, x, y, temp;
    cin >> n;
    while (n--)
    {
        for (int i=0; i < 5; i++)
                for (int j=0; j < 5; j++)
                    arr[i][j]=0;
                    
        cin >> num;
        for (int i=0; i < num; i++ )
        {   cin >> x >> y;
            cin>> arr[x][y];}
        
        long min=10000000;
        int a, b, c, d, e;
        for (a=0;a<25;a++)
            for (b=a+1;b<25;b++)
                for (c=b+1;c<25;c++)
                    for (d=c+1;d<25;d++)
                        for (e=d+1;e<25;e++)
                        {
                            temp = getval(a, b, c, d, e);
                            if (temp < min) {
                                res[0]=a;
                                res[1]=b;
                                res[2]=c;
                                res[3]=d;
                                res[4]=e;
                                min = temp;
                            }
                        }
        cout << res[0] <<" " << res[1] <<" "<< res[2] <<" " << res[3] <<" "  << res[4] << endl;
        
    }
}

    
    



/*
1
4
0 0 1
4 4 1
0 4 1
4 0 1  
 

 
 */









