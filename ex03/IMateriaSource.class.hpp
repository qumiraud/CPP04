/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:29:04 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 22:41:08 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_CLASS_HPP
# define IMATERIA_CLASS_HPP

# include <iostream>
# include <cstdlib>
# include "AMateria.class.hpp"

class IMateriaSource
{
	protected:
		AMateria*			_storage[4];
	public:
		~IMateriaSource(){}

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};



#endif
