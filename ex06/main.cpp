/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:29:44 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/13 13:56:31 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static int  LevelToEnum(std::string level)
{
    std::string levels[] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };
    for (int i = 0; i < 4; i++)
        if (!level.compare(levels[i]))
            return (i);
    std::cerr << "Possible arguments are the 4 levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
    return (-1);
}


int main(int argc, char **argv)
{
    Harl            my_harl;

    if (argc != 2)
    {
        std::cerr << "Program needs one argument." << std::endl;
        return (1);
    }
    int num = LevelToEnum((std::string)argv[1]);
    switch (num)
    {
        case 0:
            my_harl.complain("debug");
        case 1:
            my_harl.complain("info");
        case 2:
            my_harl.complain("warning");
        case 3:
            my_harl.complain("error");
            break;
        default:
            return (1);
    }
    return (0);
}
