#include "matrix.ih"

Matrix::Matrix(initializer_list<initializer_list
	<double>> rows)
:
	d_nRows(rows.size()),
	d_nCols(rows.begin()[0].size()),
	d_data(new double[rows.size()
		* rows.begin()[0].size()])
{	
	// Filling in the array with
	// the values from the list.
	size_t index = 0;
	for (initializer_list<double> cols : rows)
	{
		if (cols.size() != d_nCols)
		{
			cerr << "Matrix could not be made: "
				<< "unequal amount of columns ("
				<< d_nCols << " and " << cols.size()
				<< ").\n";
			exit(1);
		}
		
		for (double value : cols)
		{
			d_data[index] = value;
			++index;
		}
	}
}
