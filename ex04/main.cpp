/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:14:08 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/11 15:10:51 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int parsing(int argc, char **argv)
{
    char    c;

    if (argc != 4)
    {
        std::cerr << "Program takes 3 arguments: file path, to replace (string), replacement (string)" << std::endl;
        return (-1);
    }
    if (!argv || !argv[1] || !argv[1][0] || !argv[2] || !argv[2][0] || !argv[3] || !argv[3][0])
    {
        std::cerr << "Arguments cannot be empty" << std::endl;
        return (-1);
    }
    std::ifstream   file(argv[1]);
    if (!file.is_open())
    {
        std::cerr << "File cannot be open" << std::endl;
        return (-1);
    }
    if (!(file >> c))
    {
        std::cerr << "Error: '" << argv[1] << "' is not readable or is empty" << std::endl;
        return (-1);
    }
    file.close();
    return (0);
}

int main(int argc, char **argv)
{   
    if (parsing(argc, argv))
        return (-1);

    std::string const    new_file = (std::string)argv[1] + ".replace";
    std::string const    to_replace = (std::string)argv[2];
    std::string          line;
    int                  pos;
    int                  new_pos;
    std::ofstream        ofs(new_file.c_str());
    std::ifstream        ifs(argv[1]);

    while (getline(ifs, line))
    {
        pos = line.find(to_replace);
        while (pos != -1)
        {
            line.erase(pos, to_replace.size());
            line.insert(pos, argv[3]);
            new_pos = line.find(to_replace);
            if (new_pos == pos)
                break;
            else
                pos = new_pos;
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}
