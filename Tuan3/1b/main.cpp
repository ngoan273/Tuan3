#include <iostream>
using namespace std;
int a[7]={1,2,3,4};

int main()
{
    int b[10]={1,2,3,4};
    for (int i=0; i<7; i++)
        cout << a[i] << " ";
        cout << endl;
    for (int j=0; j<10; j++)
        cout << b[j] << " ";
        cout << endl;
    return 0;
}

