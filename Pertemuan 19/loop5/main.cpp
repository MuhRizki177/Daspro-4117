//Muhammad Rizki
//A11.2022.14657

#include <iostream>

using namespace std;

int main()
{
    for(int i = 0;;i++){
        cout << "Masukan Nilai Anda : ";
        cin >> i;
        if(i == -99){
            cout << "\nKeluar karena break" << endl;
            break;
        }
    }

    return 0;
}
