/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:15:22 by plashkar          #+#    #+#             */
/*   Updated: 2025/04/02 21:34:40 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFINS_HPP
#define	EASYFINS_HPP

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>

class NotFoundException: public std::exception
{
public:
	virtual const char *what() const throw();
};

/**
 * std::find() does not throw an exception when an element is not found.
 * Instead, it returns container.end(), so we should check for this manually.
 *
 * This function takes a container and a number n as arguments.
 * It searches for n in the container using std::find().
 * If n is found, the function returns an iterator to the element.
 * If n is not found, the function throws an exception.
 */
template <typename T>
typename T::iterator	easyfind(T& dataContainer, int n)
{
	typename T::iterator i = std::find(dataContainer.begin(), dataContainer.end(), n);
	if (i == dataContainer.end())
		throw NotFoundException();
	return (i);
}

#endif
