#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
public:
static int nb_contact;

    Contact(void);
    ~Contact(void);

    void init_contact(void);
    void list_contact(const int v) const;
    void display_contact(void) const;

private:

    std::string _first_name;
    std::string _last_name;
    std::string _phone_number;
    std::string _favorite_color;

};

#endif
