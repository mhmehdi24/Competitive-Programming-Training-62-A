#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string,pair<int,float> > p;
    p.first= "SALMAN";
    p.second.first= 38;
    p.second.second= 3.95;

    cout<< " Name = "<<p.first<<"\n";
    cout<< " ID = "<<p.second.first<<"\n";
    cout<< " CGPA = "<<p.second.second<<"\n";

    return 0;
}
