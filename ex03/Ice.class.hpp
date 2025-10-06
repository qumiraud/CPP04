/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:10:29 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 10:32:06 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const & ice);
		Ice(Ice const &other);
		~Ice();

		Ice const &	operator=(Ice const & other);
		Ice*	clone( void ) const;
};


#endif