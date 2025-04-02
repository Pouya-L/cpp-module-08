/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:29:25 by plashkar          #+#    #+#             */
/*   Updated: 2025/04/02 21:51:23 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <vector>
#include <limits>

class Span
{
private:
	std::vector<int>	_numbers;
	unsigned int		_maxSize;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& src);
	Span& operator=(const Span& src);
	~Span();
	void	addNumber(int n);
	void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan()const;
	int		longestSpan()const;

};

class overflowError: public std::exception
{
public:
	virtual const char *what() const throw();
};

class tooFewMembers: public std::exception
{
public:
	virtual const char *what() const throw();
};

