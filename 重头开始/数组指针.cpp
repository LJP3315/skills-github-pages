#include<bits/stdc++.h>
using namespace std;

int main()
{
    #pragma region 一维数组
    // 数组的内存是 连续存储 的
    // 一般来说 获取 数组开始位置 的地址 ，再通过 + - 来获取数组中所有的元素
    
    // 指针与数组的联系
    // 申明 数组指针
    // cout << *(p_a + 6) << '\n';
    // cout << *++p_a << '\n';


    // cout << p_b << '\t';   // arr[0] 的地址
    
    // int arr[5] = { 1,2,3,4,5 };
    // class 1:
    // int* p_a = arr;
    // // class 2:
    // int* p_b = arr;

    // cout << p_a << '\n';  // arr[0] 的地址
    // cout << *p_a << '\n'; // arr[0]

    // 数组名 用作 指针变量  --- 无法改变 arr 的指向， 只能在 arr[0] 的基础上+-
    // cout << arr << '\n';  // 1
    // cout << *(arr + 1) << '\n'; // 2
    // cout << *(arr + 4) << '\n'; // 5

    // 利用指针 遍历 数组

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(p_a + i) << '\n';

    //     cout << *p_b++ << '\n';

    //     cout << *(arr + i) << '\n';
    // }
    #pragma endregion
    
    #pragma region 二维数组
    int arr[2][4] = 
    {
        { 1,2,3,4 },
        { 5,6,7,8 }
    };
    
    // 按 元素 建立关系
    int h, l;
    h = 1, l = 0;
    int* p1 = &arr[h][l];   // 地址指向 第1行第1列的元素
    int* ptr1 = arr[0];    // 地址指向 第1行 的首个元素
    
    // 按 行数组 建立关系 --- 数组指向 某行的 一维数组 首位置
    // 语法： 变量类型 (*指针名)[元素个数]
    int (*p2)[4] = arr; 
    // int 类型 
    // 指针名 --> p2
    // 4 表示一维数组有4个元素
    
    // p2 为 第1行的数组指针(首行首个元素的地址)
    // ++p2 为第2行的数组指针  --- 按行进行 偏移 变量类型内存 * 元素个数

    // *p2 为 arr[0][0]的地址(首个元素的地址)
    // *p2 + 1 为 arr[0][1] --- 按元素进行 偏移 变量类型内存
    cout << *p2 << '\n'; // arr[0][0] 的地址
    cout << *++p2 << '\n'; // arr[1][0]的地址
    cout << p1 << '\n';  // arr[h][l] 的地址

    cout << **p2 << '\n'; // arr[1][0]
    #pragma endregion


    
    return 0;
}