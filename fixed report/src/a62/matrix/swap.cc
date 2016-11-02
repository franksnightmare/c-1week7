#include "matrix.ih"

void Matrix::swap(Matrix &other)
{
	char bytes[sizeof(Matrix)];
	memcpy(bytes, this, sizeof(Matrix));
	memcpy(this, &other, sizeof(Matrix));
	memcpy(&other, bytes, sizeof(Matrix));
}
