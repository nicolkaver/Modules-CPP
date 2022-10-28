#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
public:

    static int  nb_contact;
    static int  replace;

    Contact(void);
    ~Contact(void);

    void init_contact(void);
    void init_first_name(void);
    void init_last_name(void);
    void init_nickname(void);
    void init_phone_number(void);
    void init_darkest_secret(void);
    void list_contact(const int i) const;
    void display_contact(void) const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

    //void _write_string(const std::string string) const;
    std::string getFirstName(void) const;
	void setFirstName(std::string &str);
	std::string getLastName(void) const;
	void setLastName(std::string &str);
	std::string getNickname(void) const;
	void setNickname(std::string &str);
	std::string getPhoneNumber(void) const;
	void setPhoneNumber(std::string &str);
	std::string getDarkestSecret(void) const;
	void setDarkestSecret(std::string &str);
};

#endif
