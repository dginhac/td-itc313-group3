/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2019-10-15T09:46:41+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Summary:  Methods - Helpers functions
*/
#include "date.h"
#include <assert.h> 

namespace date {
    Date::Date(int year, int month) : _year(year), _month(month) {
        bool status = isDate(year, month);
        assert(status && "Date is not valid");
    }

    int Date::month() const {
    	return _month;
    }

    int Date::year() const {
    	return _year;
    }

    std::string Date::toString() const {
        return std::to_string(_month) + "/" + std::to_string(_year);

    }



    /**
     *
     * Helper functions
     *
    */

    bool isDate(int year, int month) {
        if ((month <1) || (month>12)) return false;
        if (year < 1) return false;
        return true;
    }



    std::ostream& operator<<(std::ostream& os, const Date& date) {
        os << std::to_string(date.year()) + "/" + std::to_string(date.month());
        return os;
    }

} // date
