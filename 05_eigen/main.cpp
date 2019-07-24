/* Introduction to Eigen

   0.) Eigen is a popular C++ linear algebra library
   1.) Basic types - MatrixXd and VectorXd
       a.) What does Xd mean?
   2.) Similar to numpy, except Eigen does linear algebra by default
       Numpy does element-wise operations by default
   3.) Cover:
       a.) Construction
       b.) Element access
       c.) Matrix/vector operations (mat2iplication, dot product)
*/

#include <Eigen/Dense>
#include <iostream>


int main(void)
{
    Eigen::MatrixXd mat(2,3);
    mat(0,0) = 1.0;
    mat(0,1) = 2.0;
    mat(0,2) = 3.0;
    mat(1,0) = 4.0;
    mat(1,1) = 5.0;
    mat(1,2) = 6.0;

    std::cout << mat << std::endl;

    // Get the number of rows and columns
    std::cout << "Number of rows: " << mat.rows() << std::endl;
    std::cout << "Number of cols: " << mat.cols() << std::endl;

    Eigen::MatrixXd mat2 = mat * mat.transpose();
    std::cout << mat2 << std::endl;

    Eigen::VectorXd v(3);
    v(0) = v(1) = v(2) = 1.0;

    // Vector dot product
    std::cout << "v.v = " << v.dot(v) << std::endl;

    // 2x3 * 3x1
    Eigen::MatrixXd vmult = mat * v;
    std::cout << vmult << std::endl;

    return 0;
}
