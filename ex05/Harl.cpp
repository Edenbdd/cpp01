/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:29:44 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/11 17:42:14 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle"
    "-special-ketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
    "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    return ;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
    "years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    int i;

    
    std::string level_arr[4] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    void (Harl::*f_ptr_arr[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(level_arr[i]))
        {
            (this->*f_ptr_arr[i])();
            return;
        }
    }
    std::cout << "No complains were found.... That's odd...." << std::endl;
    return ;
}