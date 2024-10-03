/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:48:51 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/04 01:09:58 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Define Section                              | */
/* @------------------------------------------------------------------------@ */

# ifndef PRINT_FLAG
#  define PRINT_FLAG 0
# endif // PRINT_FLAG

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string>
# include <cmath>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Fixed
{
	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed &that);
		Fixed(const int rawBits);
		Fixed(const float rawBits);

		Fixed	&operator=(const Fixed &that);

		Fixed	operator+(const Fixed &that) const;
		Fixed	operator-(const Fixed &that) const;
		Fixed	operator*(const Fixed &that) const;
		Fixed	operator/(const Fixed &that) const;

		Fixed	&operator++();
		Fixed	&operator--();

		Fixed	operator++(int);
		Fixed	operator--(int);

		bool	operator<(const Fixed &that) const;
		bool	operator<=(const Fixed &that) const;
		bool	operator>(const Fixed &that) const;
		bool	operator>=(const Fixed &that) const;
		bool	operator==(const Fixed &that) const;
		bool	operator!=(const Fixed &that) const;

		static Fixed	min(Fixed &n1, Fixed &n2);
		static Fixed	min(const Fixed &n1, const Fixed &n2);
		static Fixed	max(Fixed &n1, Fixed &n2);
		static Fixed	max(const Fixed &n1, const Fixed &n2);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		static const int	fractionalBits = 8;
		int					rawBits;
};

/* @------------------------------------------------------------------------@ */
/* |                           Function Section                             | */
/* @------------------------------------------------------------------------@ */

std::ostream	&operator<<(std::ostream &out, const Fixed &that);

#endif // FIXED_HPP
