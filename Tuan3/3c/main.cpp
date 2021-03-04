#include <iostream>

using namespace std;

int main()
{
   char daytab1[2][] = {
     {31,28,31,320,31,30,31,31,30,31,30,31},
     {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab1[i][j] << " ";
        }
        cout << endl;
    }
char daytab2[2][] = {
     31,28,31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,31,31,30,31,30,31
    };
     for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab2[i][j] << " ";
        }
        cout << endl;
     }
}
//1. nếu xóa hàng ( để cột )ở 2 cách, CT vẫn chạy bình thường
//2. nếu xóa cột ( để hàng) ở cả 2 cách, CT lỗi
//3. nếu xóa cả hàng và cột, Ct lỗi
