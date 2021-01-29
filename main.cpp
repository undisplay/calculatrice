#include <iostream>
#include <string>

using namespace std;

int op,a,b,retry=0;
string oplist = "*+/-%";


int main()
{
    cout << "BIENVENUE DANS VOTRE CALCULATRICE!" << endl <<endl;

    do
    {
        cout << "Voici la liste des operations possible" << endl <<endl;

        for (int i=0;i < 5;i++)
        {

            cout << i <<"-(" << oplist[i]<<")"<< endl;
        }

        cout  << endl << "Entrer le numero de votre operateur:" <<endl;

        cin >> op;

        cout  << endl << "Entrer le premier nombre" <<endl;

        cin >> a;

        cout  << endl << "Entrer le deuxieme nombre" <<endl;

        cin >> b;

        switch(op)
        {
            case 0:
                cout <<"Resultat:"<< a*b <<endl;
                break;
            case 1:
                cout <<"Resultat:"<< a+b <<endl;
                break;
            case 2:
                cout <<"Resultat:"<< a/b <<endl;
                break;
            case 3:
                cout <<"Resultat:"<< a-b <<endl;
                break;
            case 4:
                cout <<"Resultat:"<< a%b <<endl;
                break;
            default:
                cout <<"Resultat:"<< a+b <<endl;
                break;

        }

        cout  << endl << "Voulez-vous recomencer? 0-non;1-oui." <<endl;
        cin >> retry;
        cout << endl;
    }
    while(retry == 1);

    return 0;
}
