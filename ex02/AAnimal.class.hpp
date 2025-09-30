/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:28 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 12:52:48 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

# include <cstdlib>
# include <iostream>

class AAnimal
{
	private:

	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(AAnimal const & other);
		virtual ~AAnimal();

		AAnimal const &	operator=(AAnimal const & other);

		virtual void		makeSound( void ) const = 0;
		virtual std::string	getType( void ) const;

};


#endif
