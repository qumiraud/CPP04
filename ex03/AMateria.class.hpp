/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:38:29 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 10:40:07 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include <cstdlib>
# include "ICharacter.class.hpp"
# include "IMateriaSource.class.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(); //DEFAULT CONSTR
		AMateria(std::string const & type); //PARAMETER CONSTR
		AMateria(AMateria const & other); //COPY CONSTR
		virtual ~AMateria(); //DESTR

		AMateria const &	operator=(AMateria const & other); //OPER= OVERLOADING

		std::string const &	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use(ICharacter & target);
};




#endif
