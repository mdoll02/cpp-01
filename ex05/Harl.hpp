/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:59:56 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/12 12:02:30 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
public:
	Harl();

	~Harl();

	void complain(std::string level) const;

private:
	void _debug() const;

	void _info() const;

	void _warning() const;

	void _error() const;

};


#endif
