#include<iostream.h>
int main () 
{
    int i,j;
    for (int i=2; i<100; i++) 
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                prime=false;
                break;    
            }
        }   
        if(prime) 
        cout << i << " ";
    }
    return 0;
}
