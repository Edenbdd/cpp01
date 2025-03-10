/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:46:20 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/10 14:03:38 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_Name(name){}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout << this->getName() << " attacks with ";
    if (!(this->_Weapon))
        std::cout << "bare hands [HumanB has no weapon]";
    else
        std::cout <<  this->_Weapon->getType();
    std::cout << std::endl;
}

std::string HumanB::getName()
{
    return (this->_Name);
}

Weapon  *HumanB::getWeapon()
{
    return (this->_Weapon);
}
void    HumanB::setWeapon(Weapon &nWeapon)
{
    this->_Weapon = &nWeapon;
    return;
}
