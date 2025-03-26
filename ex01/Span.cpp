/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:33:16 by plashkar          #+#    #+#             */
/*   Updated: 2025/03/21 22:15:41 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _maxSize(N) {} // No need to initialize _numbers explicitly, it starts empty.

/**
 * it does not do a deep copy in the strict sense because std::vector performs a deep copy by default
 * when it's assigned to another vector or passed into a constructor.
 * This is because std::vector is designed to manage its own memory, and assigning one vector to another will
 * automatically allocate new memory and copy the elements.
 */
Span::Span(const Span& src): _numbers(src._numbers), _maxSize(src._maxSize) {}

Span& Span::operator=(const Span& src)
{
	if (this != &src)
	{
		_maxSize = src._maxSize;
		_numbers = src._numbers;
	}
	return (*this);
}

Span::~Span() {} // No need to explicitly clear _numbers; vector will handle it.

/**
 * Adds a number to the collection. Throws an exception if the collection is already full.
 */
void	Span::addNumber(int n)
{
	if(_numbers.size() >= _maxSize)
		throw overflowError();
	_numbers.push_back(n); // or _numbers.insert(_numbers.end(), n);
}

/**
 * This function adds a range of numbers to the collection. It takes two iterators as arguments,
 * itStart and itEnd, and inserts all the numbers between itStart and itEnd into the collection.
 *
 * If the collection is already full, the function throws an exception.
 * Otherwise, the function inserts the range of numbers into the collection.
 */
void	Span::addRange(std::vector<int>::iterator itStart, std::vector<int>::iterator itEnd)
{
	size_t rangeSize = std::distance(itStart, itEnd);
	if (_numbers.size() + rangeSize > _maxSize)
		throw overflowError();

	_numbers.insert(_numbers.end(), itStart, itEnd);
}

/**
 * Calculates and returns the shortest span (minimum difference) between any two numbers
 * in the stored collection. Throws an exception if there are fewer than two numbers.
 */
int	Span::shortestSpan()const
{
	if (_numbers.size() < 2)
		throw tooFewMembers();

	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int shortestSpan = std::numeric_limits<int>::max();
	for (size_t i = 0; i < sortedNumbers.size() - 1; i++)
	{
		int diff = sortedNumbers[i + 1] - sortedNumbers[i];
		if (diff < shortestSpan)
			shortestSpan = diff;
	}

	return shortestSpan;
}

/**
 * Calculates and returns the longest span (maximum difference) between the smallest
 * and largest numbers in the stored collection. Throws an exception if there are fewer
 * than two numbers.
 */
int	Span::longestSpan()const
{
	if (_numbers.size() < 2)
		throw tooFewMembers();

	int minValue = *std::min_element(_numbers.begin(), _numbers.end());
	int maxValue = *std::max_element(_numbers.begin(), _numbers.end());

	return (maxValue - minValue);
}


