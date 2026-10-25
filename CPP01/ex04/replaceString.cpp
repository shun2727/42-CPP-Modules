/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:59:32 by syee              #+#    #+#             */
/*   Updated: 2026/10/25 16:31:05 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //str.find , str.insert , str.erase 

/*
	iterates through the tring and replaces every occurence
*/
void replaceString(std::string &str, std::string old_str, std::string new_str)
{
	int pos = str.find(old_str);
	int old_len = old_str.length();
	
	while(pos != -1)
	{
		str.erase(pos, old_len);
		str.insert(pos, new_str);
		pos = str.find(old_str);
	}
}