
#include "string.h"
#include <iostream>

#include <stdexcept>
#include <vector>

// From the lecture. Not needed for the task:

void fail_often( )
{
   srand( time( NULL ));
   if( rand( ) & 1 )
      throw std::runtime_error( "i failed" );
}

void f( )
{
   string s = "this is a string";

   std::vector< string > vect = { "these", "are", "also", "string" };
   string more [] = {"these", "are", "even", "more", "string" };

   // fail_often( );
}

int main( )  //  int argc, char* argv [ ]
{
   // Add more tests by yourself. Untested code = unwritten code.

   string s;
   string s2 = "hello";

   s = s2;  // Assignment, not initialization.
   s = s;
   std::cout << "s = " << s << "\n";

   char c = 'k';
   s += c;
   std::cout << s << "\n";

   string s3 = "kotek";
   s += s3;
   std::cout << s3 << "\n";
   std::cout << s << "\n";

   s += s;
   std::cout << s << "\n";


    s = "this is a string";
    std::cout << s << "\n";
    for( char& c : s )
    c = toupper(c);
    std::cout << s << "\n";

   string s4 = s + s2;
   std::cout << "operatory:" << std::endl;
   std::cout << s4 << std::endl;

  return 0;
}
