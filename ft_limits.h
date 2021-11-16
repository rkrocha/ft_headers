/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochhan <rkochhan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:14:17 by rkochhan          #+#    #+#             */
/*   Updated: 2021/11/16 07:44:56 by rkochhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

/*
** Definition of char constants
*/
# define CHAR_BIT	8
# define CHAR_MIN	-128
# define CHAR_MAX	127
# define SCHAR_MIN	CHAR_MIN
# define SCHAR_MAX	CHAR_MAX
# define UCHAR_MAX	255

/*
** Definition of short constants
*/
# define SHRT_MIN	-32768
# define SHRT_MAX	32767
# define USHRT_MAX	65535

/*
** Definition of int constants
*/
# define INT_MIN	-2147483648
# define INT_MAX	2147483647
# define UINT_MAX	4294967295U

/*
** Definition of long constants
*/
# define LONG_MIN	-9223372036854775808L
# define LONG_MAX	9223372036854775807L
# define ULONG_MAX	18446744073709551615UL

/*
** Definition of long long constants
*/
# define LLONG_MIN	-9223372036854775808LL
# define LLONG_MAX	9223372036854775807LL
# define ULLONG_MAX	18446744073709551615ULL

#endif
