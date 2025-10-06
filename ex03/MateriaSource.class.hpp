/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:22:39 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 10:38:08 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.class.hpp"
# include "AMateria.class.hpp"
# include "Ice.class.hpp"
# include "Cure.class.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		MateriaSource( void );
		MateriaSource(MateriaSource const & other);
		~MateriaSource();

		MateriaSource const &	operator=(MateriaSource const & other);

		void		learnMateria(AMateria* m);
		AMateria *	createMateria(std::string const & type);
};

#endif