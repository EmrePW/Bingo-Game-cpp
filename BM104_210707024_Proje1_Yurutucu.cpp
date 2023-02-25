#include <iostream>
#include "BM104_210707024_Proje1.h"
using namespace std;

int main() {
    int q,w,e;
    cout << "Dizideki eleman sayisini giriniz : " << endl;
    cin >> q;
    BM104_210707024_Proje1 nsn(q,1,9);
    nsn.OyunOyna();
    return 0;
}

