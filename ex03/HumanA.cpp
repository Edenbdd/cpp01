/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:46:41 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/06 15:38:00 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon to_equip):_Name(name),
    _Weapon(to_equip){}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->getName() << " attacks with their ";
    std::cout <<  this->getWeapon().getType() << std::endl;
}

std::string HumanA::getName()
{
    return (this->_Name);
}

Weapon  HumanA::getWeapon()
{
    return (this->_Weapon);
}