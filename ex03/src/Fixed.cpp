/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:54:20 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/04 12:09:24 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	if (PRINT_FLAG) std::cout << "Default constructor called" << std::endl;
	rawBits = 0;
}

Fixed::~Fixed()
{
	if (PRINT_FLAG) std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &that)
{
	if (PRINT_FLAG) std::cout << "Copy constructor called" << std::endl;
	rawBits = that.getRawBits();
}

Fixed::Fixed(const int rawBits)
{
	this->rawBits = rawBits << fractionalBits;
}

Fixed::Fixed(const float rawBits)
{
	this->rawBits = rawBits * (1 << fractionalBits);
}

Fixed	&Fixed::operator=(const Fixed &that)
{
	if (PRINT_FLAG) std::cout << "Copy assignment operator called" << std::endl;
	if (this != &that)
		rawBits = that.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &that) const
{
	return (Fixed(toFloat() + that.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &that) const
{
	return (Fixed(toFloat() - that.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &that) const
{
	return (Fixed(toFloat() * that.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &that) const
{
	return (Fixed(toFloat() / that.toFloat()));
}

Fixed	&Fixed::operator++()
{
	if (PRINT_FLAG) std::cout << "Pre-increment operator called" << std::endl;
	rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	if (PRINT_FLAG) std::cout << "Post-increment operator called" << std::endl;
	Fixed	temp(*this);
	operator++();
	return (temp);
}

Fixed	&Fixed::operator--()
{
	if (PRINT_FLAG) std::cout << "Pre-decrement operator called" << std::endl;
	rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	if (PRINT_FLAG) std::cout << "Post-decrement operator called" << std::endl;
	Fixed	temp(*this);
	operator--();
	return (temp);
}

bool	Fixed::operator<(const Fixed &that) const
{
	if (PRINT_FLAG) std::cout << "Less than operator called" << std::endl;
	return (rawBits < that.getRawBits());
}

bool	Fixed::operator<=(const Fixed &that) const
{
	if (PRINT_FLAG) std::cout << "Less than or equal to operator called" << std::endl;
	return (rawBits <= that.getRawBits());
}

bool	Fixed::operator>(const Fixed &that) const
{
	if (PRINT_FLAG) std::cout << "Greater than operator called" << std::endl;
	return (rawBits > that.getRawBits());
}

bool	Fixed::operator>=(const Fixed &that) const
{
	if (PRINT_FLAG) std::cout << "Greater than or equal to operator called" << std::endl;
	return (rawBits >= that.getRawBits());
}

bool	Fixed::operator==(const Fixed &that) const
{
	if (PRINT_FLAG) std::cout << "Equal to operator called" << std::endl;
	return (rawBits == that.getRawBits());
}

bool	Fixed::operator!=(const Fixed &that) const
{
	if (PRINT_FLAG) std::cout << "Not equal to operator called" << std::endl;
	return (rawBits != that.getRawBits());
}

Fixed	Fixed::min(Fixed &n1, Fixed &n2)
{
	if (PRINT_FLAG) std::cout << "min with references called" << std::endl;
	if (n1 < n2) return (n1);
	return (n2);
}

Fixed	Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (PRINT_FLAG) std::cout << "min with const references called" << std::endl;
	if (n1 < n2) return (n1);
	return (n2);
}

Fixed	Fixed::max(Fixed &n1, Fixed &n2)
{
	if (PRINT_FLAG) std::cout << "max member function with references called" << std::endl;
	if (n1 > n2) return (n1);
	return (n2);
}

Fixed	Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (PRINT_FLAG) std::cout << "max member function with const references called" << std::endl;
	if (n1 > n2) return (n1);
	return (n2);
}

void	Fixed::setRawBits(const int raw)
{
	if (PRINT_FLAG) std::cout << "setRawBits member function called" << std::endl;
	rawBits = raw;
}

int	Fixed::getRawBits(void) const
{
	if (PRINT_FLAG) std::cout << "getRawBits member function called" << std::endl;
	return (rawBits);
}

float	Fixed::toFloat(void) const
{
	if (PRINT_FLAG) std::cout << "toFloat member function called" << std::endl;
	return (roundf(rawBits) / (1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	if (PRINT_FLAG) std::cout << "toInt member function called" << std::endl;
	return (rawBits >> fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &that)
{
	if (PRINT_FLAG) std::cout << "out operator called" << std::endl;
	out << that.toFloat();
	return (out);
}
