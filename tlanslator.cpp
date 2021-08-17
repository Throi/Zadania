//Robimy tlanslator na którym będziemy pytać się o system i liczbę 
// następnie program pokaże przekonwertowane liczby na 2 8 16 i 10
// JAZDAA :)
//
//
//
#include <iostream>
using namespace std;


int main()
{
    int tablica[1000];
    int z,D,E,P,K;
    int x,X,i,o;
    K=123123;
    cout << K << endl;    
    
// x to liczba dziesietna
// X to liczba dwojkowa wprowadzanie
    //dziesiatkowy na szesnastowy
    cout << endl << "Hex: ";
    x=K;
    D=0;
    o = x % 16;
    for(i=1;i<100;i++)
    {
        if(x<1)
        {   
            tablica[i] = o;
            break;
        }
        tablica[i] = o;
        D++;    
        x = x/16;
        o = x%16;

    }
    for(i=D;i>0;i--)
    {
        if(tablica[i]<10)  {    
        cout << (tablica[i]);
        }
        if(tablica[i]==10){
             cout << "A";
        }
        if(tablica[i]==11){
             cout << "B";
        }
        if(tablica[i]==12){
             cout << "C";
        }
        if(tablica[i]==13){
             cout << "D";
        }
        if(tablica[i]==14){
             cout << "E";
        }
        if(tablica[i]==15){
             cout << "F";
        }
    }
    cout << endl << "Osi: ";
    x=K;
    D=0;
    o = x % 8;
    for(i=1;i<100;i++)
    {
        if(x<1)
        {   
            break;
        }
            tablica[i] = o;
            D++;    
        x = x/8;
        o = x%8;

    }
    for(i=D;i>0;i--)
    {
        cout << (tablica[i]);
    }

   /* //dwojkowy na dziesietny
    cout << ("podaj liczba dwojkowa") << endl;
    x=0;
    D=0;
    for(i=0;i<100;i++){
    cin >> X;
    if(X>2)
    {
        cout <<"BLAD";
        return 0;
    }
    if(X=2)
    {
        break;
    }
    tablica[i] = X;
    E++;
    }
    for(i=E;i<0;i--)
    {
        if(tablica[i]=1)
        {
            x+=2^D;
            D++;
        }
        if(tablica[i]=0)
        {
            D++;
        }
    }
    
    */
    //dziesietny na dwojkowy
    cout << endl << "Dwoj: ";
    x=K;
    D=0;
    z = x % 2;
    for(i=1;i<100;i++)
    {
        if(x<1)
        {   
            break;
        }
        else if(z==1)
        {
            tablica[i] = z;
            D++;    
        }
        else if(z==0)
        {
            tablica[i] = z;
            D++;
        }
        x = x/2;
        z = x%2;

    }
    for(i=D;i>0;i--)
    {
        cout << (tablica[i]);
    }
    return 0;

}