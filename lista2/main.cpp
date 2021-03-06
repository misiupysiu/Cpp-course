
#include "rational.h"
#include "matrix.h"

int main( int argc, char* argv [ ] )
{
   rational r1( 2, 6 );
   rational r2( 4, 3 ); 
   rational r3( 5, 6 );
   rational r4( 1, 2 );

   matrix m1 = { { 2, 3 }, { 4, 6 } };
   std::cout << m1 << "\n";

   matrix m2 = { { 5,4 }, { 6, rational(1,2) } }; 
   std::cout << m2 << "\n";

   matrix m3 = { { 4,5}, { -1, 2 }};

   std::cout << m1. determinant( ) << "\n";

   std::cout << m1. adjugate( ) << "\n";
//   std::cout << m1. inverse( ) * m1 << "\n";


	matrix x1 = { {rational(1,2),rational(-2,7)}, {rational(1,3),rational(2,8)} };
	std::cout << "x1" << "\n";
	std::cout << x1 << "\n";

	matrix x2 = { {rational(-1,3),rational(2,5)}, {rational(2,7),rational(-1,7)} };
	std::cout << "x2" << "\n";	
	std::cout << x2 << "\n";

	std::cout << "x1*x2" << "\n";	
	std::cout << x1*x2 << "\n";

	std::cout << "x1.inverse()" << "\n";
	std::cout << x1.inverse() << "\n";


	std::cout << "zad4" << "\n";
	std::cout << ((m1*m2)*m3)-(m1*(m2*m3)) << "\n";

	std::cout << (m1*(m2+m3))-((m1*m2)+(m1*m3)) << "\n";

	std::cout << ((m1+m2)*m3)-((m1*m3)+(m2*m3)) << "\n";

	vector v1 = {4,3};
	std::cout << "v1" << "\n";
	std::cout << v1 << "\nvvv:\n";

	std::cout << (m1*m2)(v1) << "\n" << m1(m2(v1)) << "\n\n";

	std::cout << (m1.determinant()*m2.determinant())-((m1*m2).determinant()) << "\n";

	std::cout << m3*(m3.inverse())-(m3.inverse()*m3) << "\n";

}

