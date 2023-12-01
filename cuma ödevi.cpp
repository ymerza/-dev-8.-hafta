#include <iostream>
using namespace std;
int main()
{
    int toplam = 0,
    for(int i=0; i < 12; i++)
    {
        int puan;
        cout << i+1 <<". öðrenci puaný:";
        cin >> puan;
        toplam += puan;

    cout << "ortalama : " << toplam /12 ;
}
