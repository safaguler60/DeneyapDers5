#include<iostream>
using namespace std;
int main()
{


    char katar[4];
    int i;

    cout << "İkinci ismin karakterlerini giriniz: " << endl;
    for(i=0; i < 4; i++) {
        cin >> katar[i];
    }

    cout << katar;

    return 0;
}
