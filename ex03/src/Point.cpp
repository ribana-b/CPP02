/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:11:31 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/04 12:34:17 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
	if (PRINT_FLAG) std::cout << "Default Point constructor called" << std::endl;
}

Point::~Point()
{
	if (PRINT_FLAG) std::cout << "Point destructor called" << std::endl;
}

Point::Point(const Point &that) : x(that.getX()), y(that.getY())
{
	if (PRINT_FLAG) std::cout << "Point copy constructor called" << std::endl;
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
	if (PRINT_FLAG) std::cout << "Point custom constructor called" << std::endl;
}

Point	&Point::operator=(const Point &)
{
	if (PRINT_FLAG) std::cout << "Copy assignment operator called" << std::endl;
	if (PRINT_FLAG) std::cerr << "Error: The attributes are const!" << std::endl;
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (x);
}

Fixed	Point::getY(void) const
{
	return (y);
}

void	Point::show(void)
{
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Point &that)
{
	out << "(" << that.getX() << ", " << that.getY() << ")";
	return (out);
}
