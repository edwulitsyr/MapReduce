// ===============================================================================
// CSE 687 MapReduce Project
// 
// SortingClass.h
// 
// Author: Elizabeth and Cliford
// 
// Description: The intermediary results will need to be sorted and aggregated. 
//				The intermediate file will contain output such as: (a, 1), 
//				(the, 1), (is, 1), (the, 1), (a, 1). The reducer requires 
//				the same data in the format: (a, [1, 1, ]), (the, [1, 1, ]), 
//				(is, [1, ]), 
//
// File History:
// ===============================================================================

#ifndef SORTING_CLASS_H
#define SORTING_CLASS_H

#include <iostream>
#include <list>

using namespace std;

class SortingClass 
{
public:
	SortingClass();
	~SortingClass();

	/**
	 * sort is used to read and sort the data in the file passed in as the input
	 * @param iFilePath - the file that need to be sorted
	 * @return list<string> - list of sorted items
	 */
	list<string> sort(string& iFilePath);
private:

};


#endif /* SORTING_CLASS_H */