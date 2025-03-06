/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:24 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/06 13:38:29 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *first_zombie;

    first_zombie = zombieHorde(42, "Miaou");
    for (int i = 0; i < 42; i++)
    {
        std::cout << i << ": ";
        first_zombie[i].announce();
    }
    delete[] first_zombie;
    return (0);
}
