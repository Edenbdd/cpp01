/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:06:07 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/05 13:16:12 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
public:
    Zombie(void);
    ~Zombie(void);
    void announce(void);
    std::string get_name(void);
private:
    std::string name;
};
