/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:50:28 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 12:54:20 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "AAnimal.class.hpp"
# include "Brain.class.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _CatBrain;
	public:
		Cat();
		Cat(Cat const & other);
		~Cat();

		Cat const &	operator=(Cat const & other);

		void		makeSound( void ) const;
		// std::string	getType( void ) const;
};


#endif
