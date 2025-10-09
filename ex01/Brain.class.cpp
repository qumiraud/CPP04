/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:42:21 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/09 12:57:59 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain()
{
	const char*	init[100] = {"chat", "chien", "maison", "voiture", "livre",
					"ordinateur", "table", "chaise", "porte", "fenetre",
					"soleil", "lune", "etoile", "ciel", "mer",
					"arbre", "fleur", "herbe", "montagne", "rivière",
					"ville", "village", "route", "pont", "train",
					"avion", "bateau", "velo", "moto", "bus",
					"ecole", "universite", "professeur", "eleve", "classe",
					"papier", "stylo", "crayon", "cahier", "livret",
					"musique", "chanson", "guitare", "piano", "batterie",
					"film", "theatre", "cinema", "acteur", "actrice",
					"sport", "football", "tennis", "basket", "natation",
					"temps", "heure", "minute", "seconde", "jour",
					"nuit", "matin", "soir", "printemps", "ete",
					"automne", "hiver", "pluie", "neige", "vent",
					"chaleur", "froid", "feu", "eau", "terre",
					"air", "amour", "amitie", "joie", "tristesse",
					"colere", "peur", "sourire", "rire", "larme",
					"espoir", "reve", "idee", "pensée", "memoire",
					"langue", "mot", "phrase", "texte", "histoire",
					"science", "art", "culture", "monde", "univers"};
	for(int	i = 0; i < 100; i++)
	{
		_ideas[i] = init[i];
		// std::cout << "ideas " << i << " " << _ideas[i] << " spawn" << std::endl;
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}
Brain const &	Brain::operator=(Brain const & other)
{
	if (this != &other)
		this->_ideas[100] = other._ideas[100];
	return (*this);
}

std::string		Brain::getIdeas(int idx) const
{
	if (idx >= 0 && idx <= 99)
		return (this->_ideas[idx]);
	else
		return ("this ideas of out mind range");
}