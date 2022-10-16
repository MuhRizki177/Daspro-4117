#include <iostream>

using namespace std;
//Muhammad Rizki
//A11.2022.14657
int main()
{
    cout << "Deret Bilangan Fibonacci Terbesar Kurang Dari 100" << endl;
    int x1=1;
    int x2=1;
    int j=0;

    cout << "Deret Bilangan Fibonacci: " << x1 << "," << x2 << ",";
    j = x1 + x2;

    while(j < 100){
        cout << j << ",";
        x1 = x2;
        x2 = j;
        j = x1 + x2;
    }

    cout << "\n";



    return 0;
}
