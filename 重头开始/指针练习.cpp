#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ***********************************
    // Q1
    // ERROR
    // ***********************************

    // ***********************************
    // Q2
    // int a1 = 10;
    // int* p1 = &a1;
    // int a2 = *p1;
    // a2 = 20;
    // cout << *p1 << endl;  // 10
    // cout << a1 << endl;   // 10
    // ***********************************

    // ***********************************
    // Q3
    // int a = 10;
    // int* p = &a;
    
    // cout << p << endl;  // a 的地址
    // cout << &p << endl;  //  a 地址的地址
    // cout << *p << endl;   //  10
    // ***********************************

    // ***********************************
    // Q4
    // int a1, a2;
    // a1 = 100000;
    // a2 = -1;

    // int* p_a1 = &a1;
    // int* p_a2 = &a2;

    // cout << p_a1 << endl;
    // cout << p_a2 << endl;

    // int a, b;
    // cin >> a >> b;

    // if (a > b)
    // {
    //     int* p_a = &a;
    //     int* p_b = &b;
    //     cout << p_a << '\n';
    //     cout << p_b << '\n';
    // }
    // else
    // {
    //     int* p_a = &b;
    //     int* p_b = &a;
    //     cout << p_a << '\n';
    //     cout << p_b << '\n';
    // }

    // Q5 
    // 指针在64位系统中占8个字节
    // Q6
    // 根据变量的类型，int为4位， long long 为8位
    int a = 10;
    int* p_a = &a;

    cout << p_a << '\t';
    cout << ++p_a << '\t';

    cout << '\n';

    long long b = 150;
    long long* p_b = &b;

    cout << p_b << '\t';
    cout << ++p_b << '\t';

    cout << "---------------------------------" << '\n';

    // Q7
    // int a1 = 10;
    // int* p = &a1;
    // cout << p << '\n';
    // cout << *&p << '\n'; // a 的地址

    // int m, n;
    // int* p_m = nullptr, *p_n = nullptr;
    
    // cin >> m >> n;
    // p_m = &m;
    // p_n = &n;

    // cout << p_m << '\t' << p_n << '\t';
    // p_q  m_m  n_n

    int arr[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int h = 0; h < 3; h++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << arr[h][l] << '\t';
        }
    }

    return 0;
}