#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
public:

    static int nb_contact;

    Contact(void);
    ~Contact(void);

    void init_contact(void);
    void replace_contact(void);
    void list_contact(const int i) const;
    void display_contact(void) const;

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

    void _write_string(const std::string string) const;
};

#endif
