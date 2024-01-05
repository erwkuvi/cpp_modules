/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:39:47 by ekuchel           #+#    #+#             */
/*   Updated: 2024/01/05 22:37:32 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	Sample (void);
	~Sample(void);

	int	foo;
	void	bar(void) const;
};

#endif
