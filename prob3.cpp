#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, idstring,f,l;
    unsigned id,first,last,total;
    cin>>str;
    cin>>id;

    idstring = to_string(id);
    f = idstring[0];
    l = idstring[(idstring.size())-1];

    stringstream ss,ss2;
    ss << f;
    ss >> first;


    ss2<< l;
    ss2 >> last;


    total = first+last;
    cout << total << endl;



}