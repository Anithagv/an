include<stdio.h>
#include<conio.h>
void main()
{
   int matrix[4][4]={ {0, 0, 0, 0},
                      {0, 0, 0, 0},
                      {0, 1, 1, 1},
                      {0, 1, 1, 1},
                };
   int row = 3 ; 
   int colmn = 0;
   int zero = 0;
   
   while( colmn < 4 )
   {
        if( matrix[row][colmn] == 0 )
        {
            zero += ( row + 1 );
            colmn++;
        }
        else
        {
            row--;
        }
   }

    printf("Zero:%d\n", zero);

}
