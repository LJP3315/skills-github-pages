#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> mySet;
    mySet = { 1,2,3,5,6,1 };

    mySet.insert(15);
    mySet.insert(0);

    int len = mySet.size();

    // cout << mySet << '\t' << len << '\n';
    cout << len << '\n';

    return 0;
}