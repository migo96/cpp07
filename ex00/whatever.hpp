/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migo <migo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:54:13 by migo              #+#    #+#             */
/*   Updated: 2023/08/17 13:21:40 by migo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &a, T &b){
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T max(T a, T b){
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min(T a, T b){
	if (a < b)
		return a;
	else
		return b;
}

#endif