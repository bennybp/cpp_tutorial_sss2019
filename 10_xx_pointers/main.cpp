/* Introduction to 1D pointers

   0.) Use pointers to allocate memory then perform vector dot product
   1.) Raw pointers usage can lead to memory leaks -> not a good idea 
   2.) Use smart pointers instead 
   3.) Compare dot product results to eigen's
*/

#include <Eigen/Dense>
#include <iostream>
#include <memory>


int main(void)
{
    // Size of vectors
    size_t size = 10;

    // Allocate memory for all pointers
    double *vector_ptr1(new double[size]), *vector_ptr2(new double[size]);
    std::unique_ptr<double[]> vector_smrt1(new double[size]), vector_smrt2(new double[size]);

    // Instantiate eigen vectors
    Eigen::VectorXd vector_eigen1(size), vector_eigen2(size);
    
    // Initialize dot product variables (for storing results)
    double dot_product_ptr(0), dot_product_smrt(0), dot_product_eigen;

    // Raw pointers
    for(size_t i = 0; i < size; i++) {

	vector_ptr1[i] = i;
	vector_ptr2[i] = i + 1;

	dot_product_ptr += vector_ptr1[i] * vector_ptr2[i];
    }

    delete[] vector_ptr1;
    delete[] vector_ptr2;

    // Smart pointers
    for(size_t i = 0; i < size; i++) {

	vector_smrt1[i] = i;
	vector_smrt2[i] = i + 1;

	dot_product_smrt += vector_smrt1[i] * vector_smrt2[i];
    }

    // No need to free allocated memory! However, in most (but not all) scenarios 
    // std::vector/array are more practical to use than std::unique_ptr<[]> 

    // Eigen vectors
    for(size_t i = 0; i < size; i++) {

	vector_eigen1[i] = i;
	vector_eigen2[i] = i + 1;
    }

    dot_product_eigen = vector_eigen1.dot(vector_eigen2);

    // Print dot product output
    std::cout << "dot product (raw pointers) = "  << dot_product_ptr << std::endl << 
    "dot product (smart pointers) = " << dot_product_smrt << std::endl << 
    "dot product (eigen) = " << dot_product_eigen << std::endl;

    return 0;
}
