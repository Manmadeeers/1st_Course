#include "stdafx.h"
namespace In {
	IN getin(wchar_t infile[])
	{
		IN in_to_return;
		
		//set up variables thet will be written down to the "in_to_return" structure

		in_to_return.size = 0;//to count all the symbols
		in_to_return.lines = 1;//to count all the lines in a file knowing we have at least 1
		in_to_return.ignore = 0;//to count ignored symbols
		int column = 1;
		unsigned char* text = new unsigned char[IN_MAX_LEN_TEXT];

		ifstream from_file(infile);//open file to read 
		
		if (!from_file.is_open()) {
			throw ERROR_THROW(110);
		}

		while (in_to_return.size < IN_MAX_LEN_TEXT) {
			//get the current symbol from a file and store it into a variable
			char c;
			from_file.get(c);
			unsigned char current_symbol = c;
			
			if (from_file.eof()) {//if the end of the file is met
				text[in_to_return.size] = '\0';
				break;
			}

			switch (in_to_return.code[current_symbol]) {
			case IN::T:
				text[in_to_return.size] = current_symbol;
				in_to_return.size++;
				column++;
				break;
			case IN::I:
				in_to_return.ignore++;
				column++;
				break;
			case IN::F:
				throw ERROR_THROW_IN(111,in_to_return.lines,column);
				break;
			default:
				text[in_to_return.size] = in_to_return.code[current_symbol];
				in_to_return.size++;
				column++;
				break;
			}
			if (current_symbol == IN_CODE_ENDL) {//if the current symbol is the end of the line
				in_to_return.lines++;
				column = 1;//renew the variable counting columns
			}
		}
		in_to_return.text = text;

		return in_to_return;
	}
};