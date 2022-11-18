#include <iostream>
#include <fstream>
#include <string>

void replace_line(std::string &line, std::string const &str, std::string const &str_new)
{
	size_t pos;
	int cursor = 0;
	
	while((pos = line.find(str, cursor)) != std::string::npos) //str.length()
	{
		line.erase(pos, str.length());
		line.insert(pos, str_new);
		cursor = pos + str_new.length();
	}
}

void process_file(std::ifstream &infile, std::ofstream &outfile, std::string const &str, std::string const &str_new)
{
	std::string line;

	while (getline(infile, line))
	{
		std::cout << "LOL   " << line << std::endl;
		replace_line(line, str, str_new); 
		outfile << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::string str;

	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	for (int i = 0; i < argc; i++)
	{
		str.assign(argv[i]);
		if (str.empty())
		{
			std::cerr << "Error: The string is empty" << std::endl;
			return (1);
		}
	}
	std::ifstream infile(argv[1]);
	std::ofstream outfile((str.assign(argv[1]) + ".replace").c_str());
	std::string str_new = argv[3];
	str = argv[2];
	if(!infile.is_open())
	{
		std::cerr << "Error: Couldn't open input file" << std::endl;
		return (1);
	}
	if(!outfile.is_open())
	{
		std::cerr << "Error: Couldn't open output file" << std::endl;
		infile.close();
		return (1);
	}
	process_file(infile, outfile, str, str_new);
	return 0;
}
