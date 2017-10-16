#include <iostream>
#include <cmaths>

using namespace std;

bool isocele(float a,float b,float c) {
    if(a==b || a==c || c==b)
        return 1;
    else
        return 0;
}

bool rectangle(float a,float b,float c) {
    if (a>b && a>c) {
        if((b*b+c*c)==(a*a))
            return 1;
        else
            return 0;
    } else if (b>a && b>c) {
        if((a*a+c*c)==(b*b))
            return 1;
        else
            return 0;
    } else if (c>a && c>b) {
        if((a*a+b*b)==(c*c))
            return 1;
        else
            return 0;
    }
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
    float a, b, c, perimetre(0), s, A;
    bool triangle(0),iso(0),rect(0),equi(0),plat(0);;

    cout << "Rentrez les valeurs de vos 3 cotes separees d'espaces: " << endl;
    cin >> a >> b >> c;

    if(a+b>=c && b+c>=a && a+c>=b){
        cout << "Les 3 longueurs forment un triangle valide." << endl;
        triangle = 1;
    } else cout << "Un triangle ne peut avoir ces 3 longueurs comme cote." << endl;

    if(triangle){
        perimetre=+(a+b+c);
        s = perimetre / 2;
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
        cout << "Votre triangle a un perimetre de " << perimetre << " et une aire de " << A << endl;
    }
    return 0;
}