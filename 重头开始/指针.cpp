#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 指针的申明：
    int* p_i;
    char* p_c;
    float* p_f;
    string* p_s;
    unsigned* p_u;
    // 以上均为指针变量 ，储存变量的地址 

    int i = 10;
    p_i = &i;  // & 表示 地址符号
    char c = '2';
    p_c = &c;
    string s = "Hello world";
    p_s = &s;

    float f = 12.54f;
    p_f = &f;

    cout << p_i << '\n';   // ---  0x61fe18
    cout << p_f << '\n';   // ---  0x61fdec
    cout << *p_i << '\n';  // 用 解引用操作符 * 来获取 地址 存储的变量   --- 10
    cout << *p_f << '\n';  // --- 12.54  

    cout << "***************************" << '\n';
    // 可以通过改变 指针地址存储的 值 改变原来变量的值
    *p_i = 158;
    cout << *p_i << '\n';   // --- 158
    cout << i << '\n';   // --- 158

    // 空指针 nullptr or NULL
    int* p_i1 = nullptr;

    // 野指针 --- 未初始化的指针(常见)  
    

    // 看见 & 想地址
    // 看见 * 想内容

    cout << "-----------------------" << '\n';
    // &* + 地址 ---- 获得变量地址的本身
    int num = 150;
    int* p_num = &num;

    cout << num << '\n';   // 150
    cout << p_num << '\n';   // 变量地址
    cout << &p_num << '\n';   // 变量地址的地址
    cout << *p_num << '\n';   // 150
    cout << &*p_num << '\n';   // 变量地址
    
    cout << "----------------------------" << '\n';
    
    // *& + 任意变量 ---- 获得变量本身
    double d = 12.5378;
    double* p_d = &d;

    cout << d << endl;  // 12.5378
    cout << p_d << endl;  // 变量地址
    cout << *p_d << endl;   // 12.5378
    cout << &p_d << endl;   // 变量地址的地址
    cout << *&p_d << endl;   // 变量地址的地址指向的值 -> 变量地址
    cout << *&d << endl;  // 12.5378

    // 无论 *& 还是 *& 都 从右往左看
    cout << "----------------------" << '\n';
    // 指针变量的自加减 地址 +- 4(无论变量类型) 指针地址变量的内存的大小就是4

    
    int n = 258;
    int* p_n = &n;   // int变量 占4字节， ++ 地址增加4
    cout << sizeof(n) << endl;
    cout << sizeof(p_n) << endl;
    p_n++;
    cout << p_n << '\n';
    p_n++;
    cout << p_n << '\n';
    p_n--;
    cout << p_n << '\n';
    
    cout << "---------------------" << '\n';
    
    long long l = 152;
    long long* p_l = &l;  // long long 变量占8字节， ++ 地址增加8
    cout << sizeof(l) << endl;
    cout << sizeof(p_l) << endl;
    cout << p_l << '\n';
    p_l++;
    p_l++;
    cout << p_l << '\n';

    cout << "--------------------" << '\n';

    double d1 = 1583.25;
    double* p_d1 = &d1;
    cout << sizeof(d1) << endl;
    cout << sizeof(p_d1) << endl;
    cout << p_d1 << endl;
    p_d1++;
    cout << p_d1 << endl;
    // 且 地址变量 的内存大小均为8字节
}