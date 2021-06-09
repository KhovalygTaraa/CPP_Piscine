/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:24:02 by swquinc           #+#    #+#             */
/*   Updated: 2021/03/29 21:20:34 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>

class phonebook {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string portal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		void set_nickname(std::string nickname); 
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_login(std::string str);
		void set_portal_address(std::string str);
		void set_birthday_date(std::string str);
		void set_favorite_meal(std::string str);
		void set_underwear_color(std::string str);
		void set_darkest_secret(std::string str);
		void set_phone_number(std::string str);
		void set_email_address(std::string str);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_login();
		std::string	get_portal_address();
		std::string	get_birthday_date();
		std::string	get_favorite_meal();
		std::string	get_underwear_color();
		std::string	get_darkest_secret();
		std::string	get_phone_number();
		std::string	get_email_address();
};

#endif
