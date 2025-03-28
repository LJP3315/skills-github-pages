#include<bits/stdc++.h>
using namespace std;

// int main()
// {
    // // Qestion1:
    // array <int, 100> arr;

    // for (int i = 0; i < 100; i++)
    // {
    //     arr[i] = i;
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     cout << arr[i] << ' ';
    // }

    
//     return 0;
// }

// int sum(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     return sum;
// }

// int var(int arr[], int n)
// {
//     int var;
//     var = sum(arr, n) / n;

//     return var;
// }


// int main()
// {
//     int arr[] = {120, 154, 847, 265, 148};
//     int len = sizeof(arr) / sizeof(arr[0]);

//     cout << sum(arr, len) << '\n';
//     cout << var(arr, len) << '\n';
//     return 0;
// }

// int main()
// {
//     int arr[5] = { 10,20,30,40,50 }, arr1[5];
//     for (int i = 0; i < 5; i++)
//     {
//         arr1[i] = 2 * arr[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr1[i] << ' ';
//     }

//     return 0;
// }

// int mathWay(int arr[], int n)
// {
//     int maxN, minN, sum, var;
//     sort(arr, arr + n);
//     maxN = arr[n - 1], minN = arr[0];
//     for (int i = 0; i < n; i++) sum += arr[i];
//     var = sum / n;

//     return maxN, minN, sum, var;
// }

// int main()
// {
//     int arr[] = { 12,25,41,2,16,85,14 };
//     int len = sizeof(arr) / sizeof(arr[0]);

//     cout << mathWay(arr, len) << '\n';

//     return 0;
// }
// *************************************************************************
// void mathWay(int arr[], int n, int &maxN, int &minN, int &sum, int &avg)
// {
//     sort(arr, arr + n);
//     maxN = arr[n - 1], minN = arr[0], sum = 0;
//     for (int i = 0; i < n; i++) sum += arr[i];
//     avg = sum / n;
// }

// int main()
// {
//     int arr[] = { 12,25,41,2,16,85,14 };
//     int len = sizeof(arr) / sizeof(arr[0]);

//     int maxN, minN, sum, avg;
//     mathWay(arr, len, maxN, minN, sum, avg);

//     cout << maxN << '\n';
//     cout << minN << '\n';
//     cout << sum << '\n';
//     cout << avg << '\n';
//     return 0;
// }
// ******************************************************************************

// int main()
// {
//     int arr[] = { 12,15,25,98,65,11};
//     for (int i = 0, temp; i < 3; i++)
//     {
//         swap(arr[i], arr[5 - i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << '\t';
//     }
//     return 0;
// }

// int main()
// {
//     int arr[10];
//     int maxN, minN, avg, sum = 0;

//     for (int i = 0; i < 10; i++) cin >> arr[i];
//     sort(arr, arr + 10);
//     maxN = arr[9];
//     minN = arr[0];
//     for (int i = 0; i < 10; i++)
//     {
//         sum += arr[i];
//     }
//     avg = sum / 10;

//     cout << "最高分为" << maxN << '\n';
//     cout << "最低分为" << minN << '\n';
//     cout << "平均分为" << avg << '\n';
//     return 0;
// }

// int main()
// {
//     string arr[] = { "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B", "A", "B" };
//     for (int i = 0; i <= 50; i++)
//     {
//         if (i % 5 == 0)
//         {
//             cout << '\n';
//         }
//         cout << arr[i] << ' ';
//     }

//     return 0;
// }

// int main()
// {
//     int arr[] = { 12,15,-8,16,0,17,-15 };
//     for (int i = 0; i < 7; i++)
//     {
//         if (arr[i] < 0) arr[i]--;
//         else if (arr[i] > 0) arr[i]++;
//     }

//     for (int i = 0; i < 7; i++)
//     {
//         cout << arr[i] << ' ';
//     }

//     return 0;
// }


