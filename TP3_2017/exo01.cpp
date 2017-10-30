#include <iostream>
#include <cmath>

using namespace std;

bool triangle(float a, float b, float c) {
	return (a<=c+b);
}

bool isocele(float a,float b,float c) {
    if(b==a || b==c) return 1;
    return 0;
}

bool rectangle(float a,float b,float c) {
    if ((b*b+c*c)==(a*a)) return 1;
    return 0;
}

bool equilateral(float a,float b,float c) {
    if (a==c) return 1;
    return 0;
}

bool fplat(float a,float b,float c) {
    if (a-b-c==0) return 1;
    return 0;
}

int main()
{
    float x, y, z, s, A, p, a, b, c;

    cout << "Rentrez les valeurs de vos 3 cotes separees d'espaces: " << endl;
    cin >> x >> y >> z;

    p = x+y+z;

    a = fmax(fmax(x,y),z);
    c = fmin(fmin(x,y),z);
    b = p-a-c;

    if(triangle(a,b,c)){
        cout << "Les 3 longueurs forment un triangle valide." << endl;
        s = p / 2;
        A = sqrt(s*(s-a)*(s-b)*(s-c));

        cout << "Votre triangle est : ";
        if(fplat(a,b,c)) {
            cout << "plat ";
        } else {
            if(isocele(a,b,c)) {
                if(equilateral(a,b,c)) {
                cout << "equilateral ";
                } else cout << "isocele ";
            }
            if(rectangle(a,b,c)) {
                cout << "rectangle ";
            }
        }
        cout << endl;
        cout << "Votre triangle a un perimetre de " << p << " et une aire de " << A << endl;
    } else cout << "Un triangle ne peut avoir ces 3 longueurs comme cote." << endl;
    return 0;
}