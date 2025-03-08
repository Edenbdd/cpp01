/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:45:22 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/08 14:58:04 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string nType):_type(nType){};

Weapon::~Weapon(){};

std::string const &Weapon::getType()
{
    return (this->_type);
}

void    Weapon::setType(std::string const ntype)
{
    this->_type = ntype;
    return;
}
