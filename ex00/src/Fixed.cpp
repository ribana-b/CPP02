/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:54:20 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 22:40:10 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	rawBits = 0;
}

Fixed::Fixed(const Fixed &that)
{
	std::cout << "Copy constructor called" << std::endl;
	rawBits = that.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &that)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &that)
		rawBits = that.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(const int raw)
{
	rawBits = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (rawBits);
}
