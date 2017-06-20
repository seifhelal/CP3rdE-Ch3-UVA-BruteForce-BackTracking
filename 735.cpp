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
vector<int> s;

int main() {
    int i, j, k, n;
    
    for (i = 1; i <= 20; i++)
        for (j = 1; j <= 3; j++)
            s.push_back(i*j);
    s.push_back(0);
    s.push_back(50);
    
    sort(s.begin(), s.end());
    auto e = unique(s.begin(), s.end());
    s.resize(e - s.begin());
    
    while (scanf("%d", &n), (n > 0)){
        int comb = 0, perm = 0;
        for (i = 0; i < s.size(); i++)
            for (j = i; j < s.size(); j++)
                for (k = j; k < s.size(); k++)
                    if (s[i] + s[j] + s[k] == n)
                    {
                        comb++;
                        int arr[3];
                        arr[0]=s[i]; arr[1]=s[j]; arr[2]=s[k];
                        while ( std::next_permutation(arr,arr+3) )
                            perm++;
                    }
        
        
        
        
        if (comb)
            printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\nNUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", n, comb, n, perm+comb);
        else
            printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", n);
        
        for (i = 0; i < 70; i++) putchar('*');
        putchar('\n');
    }
    
    printf("END OF OUTPUT\n");
}


/*

 
 
2
2 2 4
3 2 4 6

 */









