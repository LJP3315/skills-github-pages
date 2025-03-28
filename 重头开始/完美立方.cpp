#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    #pragma region 基本
    // 输出满足 a**3 == b**3 + c**3 + d**3；
    // for (int a = 2; a <= N; a++)  // 从2开始避免出现 0 解
    // {
    //     for (int b = 2; b < a; b++) // 从2开始， 但要小于a
    //     {
    //         for (int c = b; c < a; c++) // 从b开始，大于等于b， 但小于a
    //         {
    //             for (int d = c; d < a; d++) // 从c开始， 大于等于 c， 但小于 a
    //             {
    //                 if (a*a*a == b*b*b + c*c*c + d*d*d)
    //                 {
    //                     cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    //                 }
    //             }
    //         }
    //     }
    // }
    #pragma endregion

    #pragma region 优化
    map<int, int> mp;
    for (int i = 2; i <= N; i++)
    {
        mp[i] = i*i*i;
    }

    for (int a = 2; a <= N; a++)
    {
        for (int b = 2; b < a; b++)
        {
            for (int c = b; c < a; c++)
            {
                for (int d = c; d < a; d++)
                {
                    if (mp[a] == mp[b] + mp[c] + mp[d])
                    {
                        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
                    }
                }
            }
        }
    }
    #pragma endregion
    
    return 0;

}