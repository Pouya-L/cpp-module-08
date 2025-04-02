/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:23:27 by plashkar          #+#    #+#             */
/*   Updated: 2025/04/02 19:21:40 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(10);
	// Initialize vec1 and vec2 using the constructor
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {6, 7, 8, 9, 10};
	std::vector<int> vec1(arr1, arr1 + 5); // Use array to initialize vector
	std::vector<int> vec2(arr2, arr2 + 5);

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	//adding a range of numbers to span object and checking the short and long span
	{
		std::cout << "Adding a range of numbers from 1 to 10 to span object and checking the short and long span" << std::endl;
		try
		{
			sp.addRange(vec1.begin(), vec1.end());
			sp.addRange(vec2.begin(), vec2.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "Sortest span: "<< sp.shortestSpan() << std::endl;
		std::cout << "Longest span: "<< sp.longestSpan() << std::endl;
	}
	std::cout << "---------------------------------------------------------------------------" << std::endl;
	//adding a range with mismatching iterators
	{
		std::cout << "Adding a range with mismatching iterators" << std::endl;
		try
		{
			sp.addRange(vec2.begin(), vec1.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "---------------------------------------------------------------------------" << std::endl;
	//adding a range too big to the span object
	{
		std::cout << "Adding a range too big to the span object" << std::endl;
		try
		{
			sp.addRange(vec1.begin(), vec1.end());
			sp.addRange(vec2.begin(), vec2.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

/* int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
} */

