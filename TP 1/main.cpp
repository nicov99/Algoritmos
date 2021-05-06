#include <iostream>

using namespace std;

int main()
{
    float numero, conversion;
    cout << "Ingrese velocidad en m/s: " << endl;
    cin >> numero;

    conversion = numero / 1000 * 3600;

    cout << "La velocidad en km/h es: " << conversion << endl;

    return 0;
}
