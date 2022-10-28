/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboratko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:32:17 by nboratko          #+#    #+#             */
/*   Updated: 2022/05/19 15:03:29 by nboratko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class PhoneBook {
public:

	PhoneBook(void);
	~PhoneBook(void);

	std::string get_command(void) const;
	void add_contact(void);
	void replace_contact(void);
	void search_contact(void) const;
	std::string getFirstName(void) const;
	void setFirstName(std::string str);
	std::string getLastName(void) const;
	void setLastName(std::string str);
	std::string getNickname(void) const;
	void setNickname(std::string str);
	std::string getPhoneNumber(void) const;
	void setPhoneNumber(std::string str);
	std::string getDarkestSecret(void) const;
	void setDarkestSecret(std::string str);

private:

	Contact _contact[8];

};

#endif
