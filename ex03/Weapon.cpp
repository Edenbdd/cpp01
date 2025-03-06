/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:45:22 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/06 15:50:34 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string nType):_type(nType){};

Weapon::~Weapon(){};

std::string &Weapon::getType()
{
    std::string &weaponRef = this->_type;
    return (weaponRef);
}

void    Weapon::setType(std::string ntype)
{
    this->getType() = ntype;
    return;
}
