/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:39:47 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 21:17:49 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	Sample(int v);
	~Sample(void);

	int	getFoo(void) const;
	int	compare(Sample * other) const;

private:
	int	_foo;
};

#endif
