/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:10 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/05 13:18:06 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie(){};

std::string Zombie::get_name(void)
{
    return (this->name);
}

void    Zombie::announce(void)
{
    std::cout << this->get_name();
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
