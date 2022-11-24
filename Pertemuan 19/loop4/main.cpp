//Muhammad Rizki
//A11.2022.14657

#include <iostream>

using namespace std;

int main()
{
    int jml, rt, i;
    for(i = 1; i <= 20; i++){
        cout << i << endl;
        jml = jml + i;
        rt = jml / i;
    }
    cout << "\nJumlah     = " << jml << endl;
    cout << "Rata-rata  = " << rt << ".00" << endl;
    return 0;
}
