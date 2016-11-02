#include "matrix.ih"

Matrix &Matrix::tr()
{
	if (d_nRows != d_nCols)
	{
		cerr << "Matrix could not be transposed: "
			<< "matrix not square ("
			<< d_nRows << "x" << d_nCols << ").\n";
		exit(1);
	}
	
	// The elements of each row are swapped with
	// the elements of the corresponding column
	// up to the diagonal.
	// The diagonal remains unchanged. 
	for (size_t nRow = 0; nRow != d_nRows; ++nRow)
	{
		for (size_t nCol = 0; nCol != nRow; ++nCol)
		{
			double *targetPtr = row(nRow) + nCol;
			double *mirrorPtr = row(nCol) + nRow;
			
			double h = *targetPtr;
			*targetPtr = *mirrorPtr;
			*mirrorPtr = h;
		}
	}
	
	return *this;
}
