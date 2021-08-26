#include <iostream>

int main(){
    int i, b;

    for( i = 0 ; i < 10 ; i ++ )
    {
        for(b = i; b>= 0; b--){
              std::cout << (">>") ;
        }
       std::cout << std::endl;
    }
    for( i = 8 ; i >= 0 ; i -- )
    {
        for(b = i; b>= 0; b--){
              std::cout << (">>") ;
        }
       std::cout << std::endl;
    }

    return 0;
}