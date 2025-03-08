/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:46:54 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/08 14:53:33 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
  public:
    Weapon();
    Weapon(std::string nType);
    ~Weapon();
    std::string const &getType();
    void setType(std::string ntype);
  private:
    std::string _type;  
};

#endif