/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:07 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/06 13:10:22 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
    Zombie(void);
    ~Zombie(void);
    void announce(void);
    std::string get_name(void);
    void set_name(std::string name);
private:
    std::string _name;
};

Zombie* newZombie( std::string name);
void    randomchump( std::string name);

#endif