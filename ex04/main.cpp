/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:14:08 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/10 16:55:49 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int copyFile(std::string infile, std::string copy)
{
    std::ifstream   ifs(infile);
    std::ofstream   ofs(copy);
    std::string     line;
    
    while (1)
    {
        getline(ifs, line);
        if (line.empty())
            break;
        ofs << line;
    }
    return (0);
}

int main(int argc, char **argv, char **env)
{   
    std::ifstream   ifs(argv[0]);
    std::string     infile = (std::string)argv[0];
    std::string     outfile;
    std::string     line;
    int             pos;
    std::string     to_replace = (std::string)argv[1];

    copyFile(infile, outfile);
    while (1)
    {
        getline(ifs, line);
        if (line.empty())
            break;
        pos = line.find(to_replace);
        if (pos == -1)
            continue;
        line.erase(pos, to_replace.size());
        if (pos < line.size())
            pos = pos + 1;
        line.insert(pos, argv[2]);
    }
    ifs.close();
    return (0);
}