// Name- Paras singh
//StudentID: 165-114-232
//Date: 3 August 2024
//Seneca Email: psingh721@myseneca.ca

#ifndef SENECA_UTILITIES_H
#define SENECA_UTILITIES_H

#include <string>

namespace seneca
{
    class Utilities
        //Instance Variables
    {
        //specifies the length of the token extracted; used for display purposes; default value is 1.
        size_t m_widthField = 1;
        //separates the tokens in any given std::string object. All Utilities objects in the system share the same delimiter.
        static char m_delimiter;

    public:
        //sets the field width of the current object to the value of parameter newWidth
        void setFieldWidth(size_t newWidth);   
        //returns the field width of the current object
        size_t getFieldWidth() const; 
        // extracts a token from string str referred to by the first parameter                                        
        std::string extractToken(const std::string &str, size_t &next_pos, bool &more); 

        // Class Members
        // sets the delimiter for this class to the character received
        static void setDelimiter(char newDelimiter); 
        // returns the delimiter for this class.
        static char getDelimiter();                  
    };

} // namespace seneca

#endif