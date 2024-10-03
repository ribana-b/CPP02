/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:15:13 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/04 01:01:18 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << a + b << std::endl;
	std::cout << b + a << std::endl;
	std::cout << b / a << std::endl;
	std::cout << a / b << std::endl;
	std::cout << b * a << std::endl;
	std::cout << b - a << std::endl;
	std::cout << a - b << std::endl;
	return 0;
}
