/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:26:28 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 20:29:45 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	Sample(void);
	~Sample(void);

	int		getFoo(void) const;
	bool	setFoo(int f);

private:
	int	_foo;
};

#endif
