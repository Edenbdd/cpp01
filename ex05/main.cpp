/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:29:44 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/13 13:26:48 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl            my_harl;
    std::string     test[] =
    {
        "",
        "     ",
        "test",
        "debug  autre",
        "autre  debug",
        "debug debug",
        "debug",
        "info",
        "warning",
        "error"
    };
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Testing Harl with: " << test[i] << std::endl;
        my_harl.complain(test[i]);
    }
    return (0);
}