#include <iostream>
#include <cmath>

using namespace std;

bool isocele(float a,float b,float c) {
    if(a==b || a==c || c==b)
        return 1;
    else
        return 0;
}

bool rectangle(float a,float b,float c) {
    if (a>b && a>c && (b*b+c*c)==(a*a)) return 1;
    else if (b>a && b>c && (a*a+c*c)==(b*b)) return 1;
    else if (c>a && c>b && (a*a+b*b)==(c*c)) return 1;
    return 0;
}

bool equilateral(float a,float b,float c) {
    if (a==b && a==c)
        return 1;
    else
        return 0;
}

bool fplat(float a,float b,float c) {
    if ((a+b)==c || (a+c)==b || (b+c)==a)
        return 1;
    else
        return 0;
}

int main()
{
    float a, b, c, s, A, p, temp;
    bool triangle = 0;

    cout << "Rentrez les valeurs de vos 3 cotes separees d'espaces: " << endl;
    cin >> a >> b >> c;

    if(a+b>=c && b+c>=a && a+c>=b){
        cout << "Les 3 longueurs forment un triangle valide." << endl;
        triangle = 1;
    } else cout << "Un triangle ne peut avoir ces 3 longueurs comme cote." << endl;

    if(triangle){
        p=a+b+c;
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
    }
    return 0;
}