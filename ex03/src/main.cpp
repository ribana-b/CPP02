/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:15:13 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/04 12:34:42 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point p1 = Point(Fixed(5.5f), Fixed(3));
	Point p2 = Point(Fixed(3), Fixed(5.5f));
	Point p3 = Point(Fixed(12548), Fixed(69));
	Point p4 = p3;
	std::cout << p1.getX() << std::endl;
	std::cout << p2.getX() << std::endl;
	p2 = p1;
	p1 = p2;
	p2 = p3;
	p1 = p3;
	std::cout << p1.getX() << std::endl;
	std::cout << p2.getX() << std::endl;
	std::cout << p4.getX() << std::endl;
	std::cout << p3.getX() << std::endl;
	p3 = Point(Fixed(1), Fixed(2));
	std::cout << p4.getX() << std::endl;
	std::cout << p3.getX() << std::endl;
	Point p5;
	std::cout << p5.getX() << std::endl;
	std::cout << p5.getY() << std::endl;
	p1.show();
	p2.show();
	p3.show();
	p4.show();
	p5.show();
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;
	std::cout << p5 << std::endl;
	return 0;
}
