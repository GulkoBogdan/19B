#include "math.h"
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            if (i == 0 || i == A - 1) { cout << " * "; continue; }
            if (i != 0 || i != A - 1)
                if (j == 0 || j == B - 1)
                    cout << " * ";
                else cout << "   ";
        }
        cout << "\n";
    }


    //2
    int a1 = 100;
    cout << "progress:"<<endl;
    for (int i = 0; i < a1; i++) {
        cout << i << "%" << endl    ;
        Sleep(100);
    }
    cout << "completed"<<endl;

    //3
    int n{};
    cout << "Input number: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "Prime"<<endl;
            break;
        }
        else {
            cout << "not Prime"<<endl;
            break;
        }
    }
    //4

    int n4, a4, b4, c4, d4;
    cout << "Input number "; cin >> n4; 
    a4 = n4 % 10;
    b4 = (n4 % 100) / 10;
    c4 = (n4 % 1000) / 100;
    d4 = n4/ 1000;
    if ((a4 == b4) && (a4 == c4) && (a4 == d4) && (b4 == c4) && (b4 == d4) && (c4 == d4))
    {
        cout << "Numbers same!" << endl;
    }
    else
    {
        cout << "Numbers arnt same!" << endl;
    }
    //5
    int n5, a5, b5, c5, d5;
    cout << "Input number "; cin >> n5;
    a5 = n5% 10;
    b5 = (n5 % 100) / 10;
    c5 = (n5 % 1000) / 100;
    d5 = n5/ 1000;
    if ((a5 != b5) && (a5 != c5) && (a5 != d5) && (b5 != c5) && (b5 != d5) && (c5 != d5))
        cout << "Numbers arnt same!" << endl;
    else
        cout << "Numbers same!" << endl;
    system("pause");
    return 0;
}