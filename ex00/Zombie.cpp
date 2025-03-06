/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:10 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/06 13:01:37 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie()
{
    std::cout << this->get_name() << std::endl;
};

std::string Zombie::get_name(void)
{
    return (this->_name);
}

void    Zombie::announce(void)
{
    std::cout << this->get_name();
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void  Zombie::set_name(std::string name)
{
    this->_name = name;
}