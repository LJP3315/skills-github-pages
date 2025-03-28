#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[100][100];
//     int key = 1;
//     for (int i = 0; i < 100; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//             arr[i][j] = key++;
//         }
//     }

//     for (int i = 0; i < 100; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//             cout << arr[i][j] << ' ';
//         }
//     }

//     return 0;
// }

/*
0 1 2 3 

1 0 0 0     0
1 1 0 0     1
1 1 1 0     2
1 1 1 1     3
*/

// int main()
// {
//     int arr[4][4];

//     srand(time(0));

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             arr[i][j] = rand() % 100 + 1;
//         }
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = i; j < 4; j++)
//         {
//             arr[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout  << arr[i][j] << '\t';
//         }
//         cout << '\n';
//     }

//     return 0;
// }

// int main()
// {
//     int arr[3][3];
//     int sum = 0;
//     srand(time(0));
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             arr[i][j] = rand() % 10 + 1;
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i == j)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << '\t';
//         }
//         cout << '\n';
//     }

//     cout << "sum = " << sum << '\n';
// }

// int main()
// {
//     int maxN = -1;
//     int arr[5][5];
//     srand(time(0));

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             arr[i][j] = rand() % 500 + 1;
//         }
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[i][j] > maxN)
//             {
//                 maxN = arr[i][j];
//             }
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << arr[i][j] << '\t';
//         }
//         cout << '\n';
//     }

//     cout << maxN << '\n';
// }

int main()
{
    int arr[5][5] = {
    { 0,0,0,0,0 }, 
    { 0,0,0,0,0 }, 
    { 0,1,0,0,0 }, 
    { 0,0,1,1,0 },
    { 0,0,0,0,0 }};
    int hang[25], lie[25];
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                hang[num] = i;
                lie[num] = j;
                num++;
            }
        }
    }



    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[hang[i]][j] = 1;
        }
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[j][lie[i]] = 1;
        }
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0;
}