#include <iostream>
#include <cstring>
char * string_levorotation( char * const string, int pos, int length )
{
   int start = 0;
   int end = start + pos - 1;
   char ch;
   if( 1 == length || 0 == pos )
   {
      return string;
   }

   // reverse substring from 0 to pos-1
   while( start < end )
   {
      ch = string[start];
      string[start] = string[end];
      string[end] = ch;
      start ++;
      end --;
   }

   // reverse substring from pos to the last
   int start1 = pos;
   int end1 = length - 1;
   while( start1 < end1 )
   {
      ch = string[start1];
      string[start1] = string[end1];
      string[end1] = ch;
      start1 ++;
      end1 --;
   }

   // reverse the whole string
   int start2 = 0;
   int end2 = length - 1;
   while( start2 < end2 )
   {
      ch = string[start2];
      string[start2] = string[end2];
      string[end2] = ch;
      start2 ++;
      end2 --;
   }
   return string;
}

int main( int argc, char ** argv )
{
   char string[] = "abcdef";
   char * pResult = string_levorotation( string, 2, strlen(string) );
   std::cout << pResult << std::endl;
   return 0;
}
