#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
{
	Matrix copy(other);
	swap(copy);
	return *this;
}
