// Name: Paras Singh
// Seneca Student ID: 165114232
// Seneca email: psingh721@myseneca.ca
// Date of completion: 20 July 2024
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SENECA_UTILITIES_H
#define SENECA_UTILITIES_H
#include <string>
namespace seneca {
	class Utilities {
	private:
		size_t m_fieldWidth{1};
		static char m_delimiter;
	public:
		// Sets the field width
		void setFieldWidth(size_t width);

		// gets the field width
		size_t getFieldWidth() const;

		// extracts token from string
		std::string extractToken(const std::string& str, size_t& next_pos, bool& more);

		// sets the delimiter with the given char
		static void setDelimiter(char delimiter);

		// gets the delimiter
		static char getDelimiter();

		// trims the string
		std::string trim(std::string str);		
	};
}
#endif // !SENECA_UTILITIES_H
