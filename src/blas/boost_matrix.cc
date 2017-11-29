#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

int main(int argc, char **argv)
{
  // exploit namespaces to shorten code
  using namespace boost::numeric::ublas;
  using std::cout; 
  using std::endl;

  // declare three 3x3 matrices of complex<long double> elements
  matrix<std::complex<long double> > m(3, 3), n(3, 3), o(3, 3);

  // iterate over 3x3 matrix entries
  // r : row index
  // c : column index
  for (unsigned r = 0; r < m.size1(); r++) {
    for (unsigned c = 0; c < m.size2(); c++) {
      // enumerated matrix entries
      m(r,c) = 3 * r + c;

      // complex numbers designating rows and cols
      n(r,c) = r + c * std::complex<long double>(0,1);

      // elementwise square of n
      o(r,c) = std::pow(n(r,c), 2);
    }
  }

  // print to screen as demonstration
  cout << "m:" << endl;
  cout << m << endl;
  cout << endl << "n:" << endl;
  cout << n << endl;
  cout << endl << "o:" << endl;
  cout << n << endl;
  cout << endl << "m + n:" << endl;
  cout << m + n << endl;
  cout << endl << "m * n:" << endl;
  cout << prod(m, n) << endl;
  cout << endl << "n * n - o:" << endl;
  cout << prod(n, n) - o << endl;
}
