/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:44:59 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/10 14:06:22 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        std::cout << "club type is: " << club.getType() << std::endl;
        bob.attack();
        club.setType("some other type of club");
        std::cout << "club type is: " << club.getType() << std::endl;
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        std::cout << "club type is: " << club.getType() << std::endl;
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        std::cout << "club type is: " << club.getType() << std::endl;
        jim.attack();
    }
    return (0);
}