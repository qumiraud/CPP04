/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:25:40 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 09:26:30 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <cstdlib>
# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & other);
		virtual ~WrongAnimal();

		WrongAnimal const &	operator=(WrongAnimal const & other);

		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;

};


#endif