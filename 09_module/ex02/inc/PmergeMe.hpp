#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <utility>
#include <algorithm>
#include <climits>

class PmergeMe {

private:
	std::vector<int> _vcont;
	std::vector<int> _vsorted;
	std::vector<std::pair<int, int> > _vpair;
	std::deque<int>	_dcont;
	std::deque<int>	_dsorted;
	std::deque<std::pair<int, int> > _dpair;

public:
	PmergeMe();
	PmergeMe(const PmergeMe&);
	~PmergeMe();
	PmergeMe& operator=( PmergeMe const &src);
	std::deque<int> getDcont(void) const;
	std::deque<int> getDsorted(void) const;
	std::vector<int> getVcont(void) const;
	std::vector<int> getVsorted(void) const;
	void formatedPrint(long int time_of_vector, long int time_of_deque) const;
	int setDatav(std::string numbers);
	void printNumbers(long int time_of_vector, long int time_of_deque) const;
	void vsortList(void);
	void vmergeInsertsort(void);
	void vfusion(std::vector<std::pair<int,int> >::iterator it, size_t size, size_t middle);
	void vfusionSort(std::vector<std::pair<int,int> >::iterator it, size_t size);
	void vbinarySearch(void);
	void vpushPair(void);
	void vsearchPair(void);
	void vsearchPlace(int to_place, std::vector<int>::iterator begin, std::vector<int>::iterator pl);
	int vsortChecker(void) const;
	void setDatad(std::string numbers);
	void dmergeInsertsort(void);
	void dfusion(std::deque<std::pair<int,int> >::iterator it, size_t size, size_t middle);
	void dfusionSort(std::deque<std::pair<int,int> >::iterator it, size_t size);
	void dbinarySearch(void);
	void dpushPair(void);
	void dsearchPair(void);
	void dsearchPlace(int to_place, std::deque<int>::iterator begin, std::deque<int>::iterator pl);
	int dsortChecker(void) const;
};

#endif