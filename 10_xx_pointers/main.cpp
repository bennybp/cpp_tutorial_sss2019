/* Introduction to 1D pointers

   0.) Use pointers to allocate memory then perform vector dot product
   1.) Raw pointers usage can lead to memory leaks -> not a good idea 
   2.) Use smart pointers instead 
   3.) Compare dot product results to eigen's

#include <Eigen/Dense>
#include <iostream>


int main(void)
{
    size_t size = 10;

    double *vector_ptr1, *vector_ptr2 = new double[size], new double[size];
    double dot_product_ptr(0), dot_product_smrt(0), dot_product_eigen;
    Eigen::VectorXd vector_eigen1(size), vector_eigen2(size);

    // Raw pointer

    for(int i = 0; i < size; i++) {

	vector_ptr1[i] = i;
	vector_ptr2[i] = i + 1;

	dot_product += vector_ptr1[i] * vector_ptr2[i];
    }

    delete[] vector_ptr1;
    delete[] vector_ptr2;

    // Smart pointer

    for(int i = 0; i < size; i++) {

	vector_ptr1[i] = i;
	vector_ptr2[i] = i + 1;

	dot_product += vector_ptr1[i] * vector_ptr2[i];
    }

    // Eigen vectors

    for(int i = 0; i < size; i++) {

	vector_eigen1[i] = i;
	vector_eigen2[i] = i + 1;
    }

    dot_product_eigen = vector_eigen1.dot(vector_eigen2);

    std::cout << << "dot product (raw pointers) "  << dot_product << " , dot product (eigen) = " << dot_product_eigen << std::endl;

    return 0;
}
