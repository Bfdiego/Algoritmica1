#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    list<int> listy;
    listy.push_back(1);
    listy.push_back(2);
    listy.push_back(3);
    list<int>::iterator it;
    it = listy.begin();
    cout << *it << endl;
    for (it = listy.begin(); it != listy.end(); it++)
    {
        cout << *it << endl;
    }
    

    return 0;
}
