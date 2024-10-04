/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:05:12 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/04 12:38:07 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Define Section                              | */
/* @------------------------------------------------------------------------@ */

# ifndef PRINT_FLAG
#  define PRINT_FLAG 1
# endif // PRINT_FLAG

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string>
# include "Fixed.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Point
{
	public:
		Point();
		~Point();

		Point(const Point &that);
		Point(const Fixed x, const Fixed y);

		Point	&operator=(const Point &);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		void	show(void);

	private:
		const Fixed	x;
		const Fixed	y;
};

/* @------------------------------------------------------------------------@ */
/* |                           Function Section                             | */
/* @------------------------------------------------------------------------@ */

bool	bsp(const Point v1, const Point v2, const Point v3, const Point p);
std::ostream	&operator<<(std::ostream &out, const Point &that);

#endif // POINT_HPP
