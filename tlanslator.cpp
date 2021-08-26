#include <iostream>
using namespace std;
int power(int base, int pow)
{
    int result, i;
    result = base;
    for(i=1;i<pow;i++)
    {
        base = base * result;
    }
    if(pow=1)
    {
        result = base;
    }
    if(pow=0)
    {
        result = 1;
    }
    return result;
}
void translatedec2bin(int dec)
{
    int tablica[100];
    int i,o,y,x;
    x=dec;
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

}
void translatedec2Oct(int dec)
{
    int x,y,i,o,tablica[100];
    x=dec;
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
    
}

void translatedec2Hex(int dec)
{
    int o,i,y,x, tablica[100];
    x=dec;
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
}

void translate(int x)
{
    //dwójkowy
    cout << x;
    int y,i,tablica[100] ;
    int o=0,S=x; 
    int tab2[100] = { 1, 1, 0, 1, 0};
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
    int L=5;
    o=0;
    x=0;
    for(i=L-1;i>=0;i--)
    {
        switch (tab2[i])
        {
        case  1 :
            x = x + power(2,o);
            o++;
            break;
        case 0 :
            o++;
            break;                    
        default:
        cout << "blad";
            break;
        }
    
    }
    cout << x;

}













void ShowResults(int x)
{
    translatedec2bin(x);
    translatedec2Oct(x);
    translatedec2Oct(x);
    

}

int main()
{
    //ShowResults(500);
    //translatedec2Oct(500);
    //translate(100);

    return 0;    
}
