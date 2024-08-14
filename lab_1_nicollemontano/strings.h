/**
* @file
* @brief funciones sobre string
* @author Nicolle Montaño
* @copyright MIT license
*/

#include <string>

using std::string;

#ifndef STRINGS_H
#define STRINGS_H

namespace strings{
	/**
	* @brief verifica si pattern esta contenido en str
	* @param str Cadena de caracteres
	* @param pettern Patron a buscar dentro de str
	* @return true si pattern esta contenido en str
	*/

	bool contains(const string & str,
				  const string & pattern){
		size_t j;
		for (size_t i=0;i<str.length();i ++){
			for( j = 0;j<pattern.length();j++){
				if(str[i] == pattern[j]){
					i++;
					
				}else{
				break;
			}}
			if(j== pattern.length()){
				return true;
			}
		}
		return false;
	}
}
#endif
