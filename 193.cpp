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

int num_nodes, num_edges;
map<int, vector<int > > edges;
int nodes[110];
vector<int> result;
int res=0;

bool valid(int node)
{
    for (int i=0; i < edges[node].size();i++)
    {
        if (nodes[edges[node][i]]==1)
            return false;
    }
    return true;
}

void recurse (int counter)
{
    if (counter == num_nodes)
    {
        int c=0;
        vector <int> vec;
        for (int i=0; i <num_nodes; i++)
            if (nodes[i]==1)
            {
                c++;
                vec.push_back(i+1);
            }
        if (c > res)
        {
            res=c;
            result=vec;
            vec.clear();
        }
        return;
    }

    if (valid(counter))
    {   nodes[counter]=1;
        recurse(counter+1);}
    nodes[counter]=0;
    recurse(counter+1);

}


int main ()
{
    int n;
    cin >> n;
    while (n--)
    {
        edges.clear();
        fill(nodes, nodes+110, 0);
        result.clear();
        res=0;
        
        cin >> num_nodes >> num_edges;
        int  temp1, temp2;
        for (int i=0; i < num_edges; i++)
        {
            cin >>temp1 >> temp2;
            edges[temp1-1].push_back(temp2-1);
            edges[temp2-1].push_back(temp1-1);
        }
        recurse(0);
        cout << res << endl;
        cout << result[0];
        for (int i=1; i < result.size(); i++)
            cout <<" "<< result[i];;
        if (n)
            cout << endl;
        
    }
}



/*

 
 
 1
 6 8
 1 2
 1 3
 2 4
 2 5
 3 4
 3 6
 4 6
 5 6
 

  */

















