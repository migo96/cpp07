/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migo <migo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:54:13 by migo              #+#    #+#             */
/*   Updated: 2023/09/01 12:17:02 by migo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array{
	private:
			int len;
			T	*array;
	public:
		Array()
		:len(0)
		{
			array = new T[0];
		};
		Array(int a)
		:len(a)
		{
			array = new T[a];
		};
		~Array(){
			delete array;
		};
		Array(const Array &a)
		{
			array = new T[a.len];
			for (int i = 0; i < a.len; i++){
				array[i] = a.array[i];
			}
			len = a.len;
		};
		Array &operator=(const Array &a){
			if (this != &a){
				delete array;
				array = new T[a.len];
				for (int i = 0; i < a.len; i++){
					array[i] = a.array[i];
				}
				len = a.len;
			}
			return *this;
		};
		T &operator[](int a)
		{
			if (a > -1 && a < len)
				return array[a];
			else
				throw std::out_of_range("array 의 범위를 넘어섬");
		};
};

#endif