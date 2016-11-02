#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
{
	return *this = Matrix(other);
}
