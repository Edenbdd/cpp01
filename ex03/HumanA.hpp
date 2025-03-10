/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:46:47 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/10 14:05:48 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon &to_equip);
    ~HumanA();
    void        attack();
    std::string getName();
    Weapon      getWeapon();
private:
    std::string const _Name;
    Weapon const      &_Weapon;
};

#endif