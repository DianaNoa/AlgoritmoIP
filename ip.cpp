#include <iostream>
using namespace std;
int main()
{
	
    int n,M,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,x,S;
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0,cont=0;
    int a1 = 0, b2 = 0, c3 = 0, d4 = 0,e5 = 0, f6 = 0, g7 = 0, h8 = 0;
    int n1, n2, n3, n4;
    short BIN[8];
    short MASC[8];
    for (int i = 0; i < 4; i++)
    {
        cont++;
        cout << endl << "....| Escriba el elemento "<<cont<<" de la direccion IP |...." << endl;
        cin >> n;
        cout << endl << "....| Escriba el elemento "<<cont<<" de la Mascara de subred |...." << endl;
        cin >> M;

        for (int i = 0; i < 8; i++) 
        {
            BIN[i] = n % 2;
            n /= 2; 
            MASC[i] = M % 2;
            M /= 2;
        }
        
        cout << "Despues de multiplicar tendremos: ";
        for (int i = 7; i >= 0; i--)
        {
            if (i == 0) {
                A = MASC[i];
                a = BIN[i];
                a1 = A * a;
                if (a1 == 1)
                {
                    a1 = 1;
                }
            }
            if (i == 1) {
                B = MASC[i];
                b = BIN[i];
                b2 = B * b;
                if (b2 == 1)
                {
                    b2 = 2;
                }
            }
            if (i == 2) {
                C = MASC[i];
                c = BIN[i];
                c3 = C * c;
                if (c3 == 1)
                {
                    c3 = 4;
                }
            }
            if (i == 3) {
                D = MASC[i];
                d = BIN[i];
                d4 = D * d;
                if (d4 == 1)
                {
                    d4 = 8;
                }
            }
            if (i == 4) {
                E = MASC[i];
                e = BIN[i];
                e5 = E * e;
                if (e5 == 1)
                {
                    e5 = 16;
                }
            }
            if (i == 5) {
                F = MASC[i];
                f = BIN[i];
                f6 = F * f;
                if (f6 == 1)
                {
                    f6 = 32;
                }
            }
            if (i == 6) {
                G = MASC[i];
                g = BIN[i];
                g7 = G * g;
                if (g7 == 1)
                {
                    g7 = 64;
                }
            }
            if (i == 7) {
                H = MASC[i];
                h = BIN[i];
                h8 = H * h;
                if (h8 == 1)
                {
                    h8 = 128;
                }
            }
            //cout<< h <<"."<< g <<"."<< f <<"."<< e <<"."<< d <<"."<< c <<"."<< b <<"."<< a<<"    "<<endl;
            
            //cout <<BIN[i]<<".";
            //cout <<MASC[i]<<".";
            x = BIN[i] * MASC[i];
            cout << x <<".";
        }
        cout << endl;
        cout <<endl<<"Elemento "<<cont<<" De IP en Binario: "<< h << "." << g << "." << f << "." << e << "." << d << "." << c << "." << b << "." << a << "   " << endl;
        cout <<"Elemento "<<cont<< " De la M.de subred en binario: "<< H << "." << G << "." << F << "." << E << "." << D << "." << C << "." << D << "." << A << "   " << endl;
        cout << endl;
        cout << "Despues de multiplicar tendremos: " << h8 << "." << g7 << "." << f6 << "." << e5 << "." << d4 << "." << c3 << "." << b2 << "." << a1 << "   " << endl;
    

        S = h8 + g7 + f6 + e5 + d4 + c3 + b2 + a1;
        if (i == 0) {
            n1 = S;
        }
        if (i == 1) {
            n2 = S;
        }
        if (i == 2) {
            n3 = S;
        }
        if (i == 3) {
            n4 = S;
        }
    }  
    cout << "\nPertenece a la Red ";
	cout<< n1 << "." << n2 << "." << n3 << "." << n4 << endl;
    cout << endl;
    return 0;
}