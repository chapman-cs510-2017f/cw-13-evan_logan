#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

int main(int argc, char **argv)
{
    using namespace boost::numeric::ublas;
    using std::cout;
    using std::endl;

    int xlen = 5;      //(int) *argv[0];
    int ylen = 5;      //(int) *argv[1];
    long double xmin = -10;      //(long double) *argv[2];
    long double xmax = 10;    //(long double) *argv[3];
    long double ymin = -10;    //(long double) *argv[4];
    long double ymax = 10;     //(long double) *argv[5];
    long double dx = (xmax - xmin)/(xlen-1);
    long double dy = (ymax - ymin)/(ylen-1);

    matrix<std::complex<long double> > cplane(ylen,xlen);

    for (unsigned r = 0; r < cplane.size1(); r++)
    {
        for (unsigned c = 0; c < cplane.size2(); c++)
        {
            cplane(r,c) = std::complex<long double>(xmin + c*dx, ymin + r*dy);
            cout << cplane(r,c) << "\t";
        }
        cout << endl;
    }

}