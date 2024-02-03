/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:53:48 by eros-gir          #+#    #+#             */
/*   Updated: 2023/10/25 10:04:44 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include"polymorph.h"
# include"Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &operator=(Animal const &rhs);

		std::string		getType(void) const;
		void			setType(std::string type);

		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const = 0;
};

std::ostream &operator<<(std::ostream &out, Animal const &rhs);

#endif