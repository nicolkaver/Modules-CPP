#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace {
    public:
        Replace(void);
        ~Replace(void);

    	void setFile(std::string newFile);

	    void replace(std::string s1, std::string s2);
	    void outputToFile(std::string fileContent);

    private:
        std::string _stringToReplace; //s1
	    std::string	_replacement; //s2
	    std::string	_fileName;
	    std::ifstream _inputFileStream;
};