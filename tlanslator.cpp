#include <iostream>
using namespace std;

void translate(int x)
{
    //dwójkowy
    cout << x;
    int y,i,tablica[100] ;
    int o=0,S=x; 
    int tab2[100] = { 1, 0, 1, 0};
    while (x>=1)
    {   
        y = x%2; 
        tablica[o] = y;
        o++;
        x = x/2;    
    }
    cout << endl << "dwojkowy: ";
    for(i=o-1;i>=0;i--)
    {
        cout << tablica[i];
    }
    
    //ósemkowy
    
    o=0,x=S;    
    while(x>=1)
    {   
        y = x%8; 
        tablica[o] = y;
        o++;
        x = x/8;    
    }
    cout << endl << "osemkowy: ";
    for(i=o-1;i>=0;i--)
    {
        cout << tablica[i];
    }

    //szestnastkowy

        o=0,x=S;    
    while(x>=1)
    {   
        y = x%16; 
        tablica[o] = y;
        o++;
        x = x/16;    
    }
    cout << endl << "szestnastkowy: ";
        for(i=o-1;i>=0;i--)
        {
            switch (tablica[i])
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << tablica[i];
                break;
            }
        }
    
    //dwojkowy na dziesietny
    cout << endl ; //"dwoj na dzies";
    int L=3;
    o=0;
    x=0;
    for(i=L;i>=0;i--)
    {
        /*switch (tab2[i])
        {
        case  1 :
            x=+2^o;
            o++;
            break;
        case 0 :
            o++;
            break;                    
        default:
        cout << "blad";
            break;
        }*/
        if (tab2[i]==1)
        {
            x = x + pow(2,o);
            o++;
            cout << i << " jeden " << x << " " << o << endl;
        }
        if (tab2[i]==0)
        {
            o++;
            cout << i << " zero " << x << " " << o << endl;
        }
        if (tab2[i]>1)
        {
            cout << "blad";
            cout << i << " " << x << endl;
        }    
    }
    //cout << x;


    

}

void ShowResults()
{
    

}

int main()
{
    translate(2000);

    return 0;    
}

int pow(int base, int pow)
{
    int result, i;
    for(i=0;i<pow;i++)
    {
        base = base * result;
    }
    if(base=0)
    {
        result = 1;
    }
    return result;
}
