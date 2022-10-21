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

# define UDL "\033[4m"
# define END "\033[0m"

class PhoneBook {
public:

	PhoneBook(void);
	~PhoneBook(void);

	std::string get_command(void) const;
	void add_contact(void);
	void replace_contact(void);
	void search_contact(void) const;

private:

	Contact _contact[9];

};

#endif