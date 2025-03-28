#include<iostream>
#include<utility>

using namespace std;

// 申明:
int main()
{
    pair<int, int> p1 = {12, 25};

    cout << p1.first << ' ';
    cout << p1.second << '\n';

    pair<string, int> p2 = {"名字", 25};
    cout << p2.first << ' ';
    cout << p2.second << '\n';

    pair<int, int> p3 = {12, 258};
    pair<int, int> p4 = {12, 257};

    p3.second = 245;
    bool t = (p3 > p4);
    if (t) cout << "正确" << '\n';
    else cout << "错误" << '\n';

    return 0;
}