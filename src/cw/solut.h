/*! \file       solut.h
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       20.11.2019
 *
 *  CW. Types aliases and definition, and function prototypes.
 *
 *      DO NOT MODIFY THIS FILE!
 *
 */

#include <string>
#include <vector>
#include <set>
#include <map>

// Custom types

/// Set of strings. It is used for many purposes.
typedef std::set<std::string> StrSet;

/// An Employee structure.
struct Employee {
    std::string name;
    std::string department;
    std::string position;
    int room_number;
    std::string boss;
    StrSet workdays;
};

/// Maps employees' names to employee objects. Used to represent a collection
/// of employees with a quick access by an employee's name.
typedef std::map<std::string, Employee> NameEmployeeMap;

/// Maps strings to sets of strings. It is used for many purposes.
typedef std::map<std::string, StrSet> Str2StrSet;

/// Stores employees grouped by departments (alias for Str2StrSet).
typedef Str2StrSet DepartEmplMap;



// prototypes
NameEmployeeMap loadEmployeeData(std::istream& istr);
DepartEmplMap GroupByDepartents(const NameEmployeeMap& team);
void printDepartEmplMap(std::ostream& ostr, const DepartEmplMap& depList,
                                 const NameEmployeeMap& team);
void outputStrSet(std::ostream& ostr, const StrSet& ss);
StrSet selectSubordinates(const std::string& boss, const NameEmployeeMap& team);
