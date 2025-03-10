/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:46:20 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/10 09:37:25 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_Name(name){}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::string current_weapon;
    
    current_weapon = this->_Weapon.getType();
    std::cout << this->getName() << " attacks with their ";
    if (current_weapon.empty())
        std::cout << "bare hands [HumanB has no weapon]";
    else
        std::cout <<  current_weapon;
    std::cout << std::endl;
}

std::string HumanB::getName()
{
    return (this->_Name);
}

Weapon  *HumanB::getWeapon()
{
    Weapon  *weaponPtr = &(this->_Weapon);
    return (weaponPtr);
}
void    HumanB::setWeapon(Weapon nWeapon)
{
    Weapon  *curr_weapon;
    
    curr_weapon = (&this->_Weapon);
    curr_weapon->setType(nWeapon.getType());
    return;
}
