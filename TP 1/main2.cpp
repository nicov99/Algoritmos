#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, disc, x1, x2;
    cout << "Ingrese valores a, b y c respectivamente: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    disc = (b*b)-(4*a*c);

    if ((disc > 0)&&(a!=0)){
        x1 = (-b+(sqrt(disc)))/(2*a);
        x2 = (-b-(sqrt(disc)))/(2*a);
        cout << "Los valores de x son: " << endl << x1 << endl << x2 << endl;
    }
      if ((disc == 0)&&(a!=0)){
        x1 = (-b+(sqrt(disc)))/(2*a);
        cout << "X tiene una unica solucion y es: " << x1 << endl;
    }
    if (disc < 0){
        cout << "No se puede resolver, discriminante menor a 0" << endl;
    }
    return 0;
}
