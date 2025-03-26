/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:14:05 by plashkar          #+#    #+#             */
/*   Updated: 2025/03/21 20:22:20 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eastfind.hpp"
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <deque>
#include <list>

// Text color codes
# define RESET		"\033[0m"	// Reset color
# define RED		"\033[31m"	// Red
# define GREEN		"\033[32m"	// Green
# define YELLOW		"\033[33m"	// Yellow
# define BLUE		"\033[34m"	// Blue
# define MAGENTA	"\033[35m"	// Magenta
# define CYAN		"\033[36m"	// Cyan
# define WHITE		"\033[37m"	// White

int	main(void)
{
	srand(time(0));
	std::cout << "---------------------------------------------------------------------------" << std::endl;
	//Finding n in a vector
	{
		std::cout << "Finding 5 in a vector randomly filled with single digit numbers:" << std::endl;
		std::vector<int> Number_vector(10);
		for(size_t  i = 0; i < Number_vector.size(); i++)
		{
			Number_vector[i] = rand() % 10;
		}

		// Print the vector for debugging
		std::cout << "vector: ";
		for (size_t i = 0; i < Number_vector.size(); i++)
			std::cout << Number_vector[i] << " ";
		std::cout << std::endl;

		// Attempt to find the number 5
		try {
			std::vector<int>::iterator i = easyfind(Number_vector, 5);
			std::cout << GREEN << "Found: " << *i << RESET << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << "---------------------------------------------------------------------------" << std::endl;
	//Finding n in a deque
	{
		std::cout << "Finding 7 in a deque randomly filled with single digit numbers:" << std::endl;

		std::deque<int> Number_deque(10);  // Initialize deque with 10 elements
		for (size_t i = 0; i < Number_deque.size(); i++)
		{
			Number_deque[i] = rand() % 10;
		}

		// Print the deque for debugging
		std::cout << "deque: ";
		for (size_t i = 0; i < Number_deque.size(); i++)
			std::cout << Number_deque[i] << " ";
		std::cout << std::endl;

		// Attempt to find the number 5
		try {
			std::deque<int>::iterator i = easyfind(Number_deque, 7);
			std::cout << GREEN << "Found: " << *i << RESET << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << "---------------------------------------------------------------------------" << std::endl;
	//Finding n in a list
	{
		std::cout << "Finding 9 in a list randomly filled with single digit numbers:" << std::endl;

		std::list<int> Number_list;  // No need to specify size in constructor
		for (int i = 0; i < 10; i++) {
			Number_list.push_back(rand() % 10);  // Use push_back to insert elements
		}
		// Print the list for debugging
		std::cout << "List: ";
		for (std::list<int>::iterator it = Number_list.begin(); it != Number_list.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

		// Attempt to find the number 5
		try {
			std::list<int>::iterator i = easyfind(Number_list, 5);
			std::cout << GREEN << "Found: " << *i << RESET << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << "---------------------------------------------------------------------------" << std::endl;
}
