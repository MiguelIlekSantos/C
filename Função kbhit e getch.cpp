#include <conio.h>
#include <stdio.h>

int main( void )
{
   while( !_kbhit() )
      _cputs( "Hit me!! \n" );

   printf( "\nKey struck was '%c'\n", _getch() );
}
