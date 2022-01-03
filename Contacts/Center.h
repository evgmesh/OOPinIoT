/* Evgenii Meshcheriakov. Project 7
 * from:  http://www.cplusplus.com/forum/general/256212/ */

#include <iostream>

template < typename T > struct center
{
    explicit center(const T& v ) : what(v) {}
    const T& what ;

    template < typename C, typename CT >
    friend std::basic_ostream<C,CT>& operator << (std::basic_ostream<C,CT>& stm, center c )
    {
        const auto width = stm.width() ;
        if( width < 2 ) return stm << c.what ;

        std::basic_ostringstream<C,CT> str_stm ;
        str_stm.flags( stm.flags() ) ;
        str_stm << std::left << c.what ;
        const auto string_rep = str_stm.str() ;

        if( string_rep.size() >= width ) return stm << string_rep ;

        const auto left = ( width - string_rep.size() ) / 2 ;
        const auto right = width - string_rep.size() - left ;
        const auto fill = stm.fill() ;

        str_stm.str({}) ;
        for( int i = 0 ; i < left ; ++i ) str_stm << fill ;
        str_stm << string_rep ;
        for( int i = 0 ; i < right ; ++i ) str_stm << fill ;

        stm.width(0) ;
        return stm << str_stm.str() ;
    }
};