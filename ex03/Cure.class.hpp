/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:11:05 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 10:32:00 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const & Cure);
		Cure(Cure const &other);
		~Cure();

		Cure const &	operator=(Cure const & other);
		Cure*	clone( void ) const;
};

#endif
