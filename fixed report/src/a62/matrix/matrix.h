#ifndef MATRIX_H_
#define MATRIX_H_

#include <cstddef>
#include <initializer_list>

class Matrix
{
	size_t d_nRows = 0;
	size_t d_nCols = 0;
	
	double *d_data = 0;
	
	public:
		Matrix() = default;
		Matrix(size_t nRows, size_t nCols);
		Matrix(std::initializer_list<
			std::initializer_list<double>> rows);
		Matrix(Matrix const &other);
		Matrix(Matrix &&other);
		~Matrix();
		Matrix &operator=(Matrix const &other);
		Matrix &operator=(Matrix &&other);
		Matrix &tr();
		
		void swap(Matrix &other);
		
		size_t const &nRows();
		size_t const &nCols();
		
		double *row(size_t index);
		double const *row(size_t index) const;
		
		Matrix transpose();
		static Matrix identity(size_t dim);
	
	private:
};

#endif
