#include <iostream>

using namespace std;

    int a[10];
int main()
{
    int b[10];
    for (int i=0; i<10; i++)//khai bao mang ngoai ham main
        cout << a[i] << " ";
        cout << endl;
    for (int j=0; j<10; j++)// khai bao mang trong ham main
        cout << b[j] << " ";
        cout << endl;
    return 0;
}
