/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomchump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:15 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/06 13:09:24 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomchump( std::string name)
{
    Zombie  nzombie;
    
    nzombie.set_name(name);
    nzombie.announce();
    return;
}