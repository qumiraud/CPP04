/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:42:42 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/09 12:46:45 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>
#include <cstdlib>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(Brain const & other);
		~Brain();

		Brain const &	operator=(Brain const & other);

		std::string		getIdeas(int idx) const;
};




#endif