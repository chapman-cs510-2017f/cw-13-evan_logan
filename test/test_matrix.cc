#include <iostream>
#include "../src/matrix/matrix.h"

int main() {
    // Define two 10x10 matrices with element types of long double
    // The first has all elements set to 1.0
    Matrix<long double> mat1(10, 10, 1.0);
    // The second has all elements set to 2.0
    Matrix<long double> mat2(10, 10, 2.0);

    // Set a few elements differently as a test of accessors
    mat1(3,4) = 10.0;
    mat2(1,2) = -15.0;

    // Define a third matrix as the sum of the first two
    Matrix<long double> mat3 = mat1 + mat2;
    mat3 = mat3 + (-2);
    mat3.print();

    Matrix<long double> mat4(2,2,1.0);
    mat4(0,1) = 2.0;
    mat4(1,0) = 3.0;
    mat4(1,1) = 4.0;
    
    std::cout << std::endl << "Matrix M4:" << std::endl;
    mat4.print();
    std::cout << std::endl << "Matrix M4*M4 :" << std::endl;
    Matrix<long double> mat5 = mat4*mat4;
    mat5.print();

    return 0;
}
