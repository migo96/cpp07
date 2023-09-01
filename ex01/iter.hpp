/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migo <migo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:54:13 by migo              #+#    #+#             */
/*   Updated: 2023/08/28 11:46:12 by migo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void printA(T &array){
	std::cout << array << std::endl;
}

template <typename T>
void iter(T *array, int len, void(*fun)(T &array)){
	int i = 0;
	while (i < len){
		fun(array[i]);
		i++;
	}
}

template <typename T>
void iter(const T *array, int len, void(*fun)(T &array)){
	int i = 0;
	while (i < len){
		fun(array[i]);
		i++;
	}
}

#endif