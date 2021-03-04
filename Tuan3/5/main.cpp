# include <iostream>
# include <time.h>
# include <stdlib.h>

using namespace std;
int main()
{
    srand (time(NULL));
    int a[30];
    for (int i=0; i<30; i++)
        a[i] = rand ()%100 ;
    cout << "Mang nhap vao la: ";
    for ( int i=0; i<30; i++)
        cout << a[i] << " ";
        cout <<endl;

    for (int i=0; i<30; i++)
    {
        for (int j=i+1; j<30; j++)
        {
            if(a[i]>a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    cout << "Mang sap xep lai la: ";
    for (int i=0; i<30; i++)
        cout << a[i] << " ";
        cout << endl;
    return 0;
}
