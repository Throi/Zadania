#include <iostream>

int main()
{
    int i, x, y;
    for(i=0;i<10;i++)
    {
        
       
        for(x=i;x>=0;x--)
        {
           std::cout << (" ") ;    
        }
        for(y=9-i;y>=0;y--)
        {
            std::cout << ("*");
        }

        std::cout << std::endl;
    }
     
    return 0;
}