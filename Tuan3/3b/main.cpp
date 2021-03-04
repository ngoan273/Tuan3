#include <iostream>

using namespace std;

int main()
{
    char daytab[2][12] = {
     {31,28,31,30,30,31,30,31},
     {29,30,31,31,30,31,30,31,30,31}
    };
    for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    } // kí tự vẫn chạy lần lượt từ đầu hàng tới cuối hàng không ảnh hưởng đến các cột
    char daytab1[2][12] = {
     31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,30,31
    };
     for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab1[i][j] << " ";
        }
        cout << endl;
     }
    return 0;// kí tự chạy lần lượt hết từng hàng, đủ 12 kí tự trên 1 hàm
}

