/*
 * dictionary.h
 *
 *  Created on: Sep 23, 2019
 *      Author: cstclair
 */

#ifndef DICTIONARY_H_
#define DICTIONARY_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Dictionary{
	private:
		vector<string> _words;
	public:
		Dictionary(){}
		void buildDictionary();
			// Reads the words from an input file and populates memory
			// pre:  none
			// post:  words loaded in memory or or severe error occured
		inline string getWord(int i) const{
			return _words[i];
		}
		inline int size() const{
			// Returns the number of words in the dictionary
			// pre:  none
			// post:  Returns the number of words in the dictionary
			return _words.size();
		}
};




#endif /* DICTIONARY_H_ */
