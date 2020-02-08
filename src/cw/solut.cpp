/*! \file       solut.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       20.12.2019
 *
 *  CW. Solutions.
 *
 *      → Provide your solution here and upload this file to Ya.Contest! ←
 *
 *  Use proper decomposition!
 */

// Warning! Do not remove the following line.
#include "solut.h"




//=========================[TASK 1: up to 0.35]===============================//



/*!
 * \brief Function loads data about employees from a given input stream \a istr,
 * creates a collection of employees related to strings in the stream and
 * returns it.
 *
 * \param istr an input stream.
 * \return a collection of employees filled up with data read from a given
 * stream.
 *
 * A collection of employees is represented by a map of NameEmployeeMap type
 * (see solut.h for the definition). Each record about employees is
 * represented by a single line (ended with '\n') and gets its corresponding
 * element in the map. The key of a map's element is an employee's name, the
 * value is an Employee object. Note, for an object
 *      Employee empl
 * its member field "name" (empl.name) is equal to the key.
 *
 * A given stream (highly likely represented by a text file) provides one
 * employee record per line. A line consists of:
 *  - employee's name (string)
 *  - position (string)
 *  - boss (string)
 *  - salary (int, 0 for interns)
 *  - experience (string)
 *  - working days (sequence of strings, not empty)
 * All strings are limited in length and do not exceed 100 characters.
 * The attributes within a single line are separated by semicolon characters ';'.

 *
 * The empty line occurred in the stream means the input completion.
 *
 * Employee name, boss name and experience strings can contain spaces.
 *
 * Example:
 *      Liyah Rosas;fellow;Manuel Carson;500;less than 3 years;Tue;Thu
 *      ...
 *      Leilani Kouma;fellow;Manuel Carson;450;3 to 5 years;Mon;Wed;Sat
 *      ...
 *
 *
 * The number of working days for each employee may vary and is not known in
 * advance.
 *
 * It is highly recommended to decompose the method properly. Solve each
 * subtasks by using individual functions.
 */
NameEmployeeMap loadAllEmployees(std::istream& istr)
{
    NameEmployeeMap mp;

    // TODO: finish up with an implementation here...

    return mp;
}


//=========================[TASK 2: up to 0.65]===============================//

// !! → Both following methods must be provided as a single submission! ←

/*!
 * \brief function makes a selection of epmployees distributed by experience.
 *
 * \param team is a map of employees (e.g. created by loadAllEmployees() function).
 * \return a collection of employees (names) distributed by experience.
 *
 * Cost: »»»0.25«««
 *
 * Function makes a map (of type ExpEmplMap) where a key represents
 * experience(string) and the corresponding value represents a set of
 * employee names (StrSet) with such an experience.
 *
 * Example:
 *
 *      "3 to 5 years" → { "Keagan Ahmed", "Leilani Kouma", "Louisa Barton"}
 *      ...
 *      "more than 8 years" → { "Shanai Bowman", "Wyatt Richards"}
 *      ...
 */
ExpEmplMap groupByExp(const NameEmployeeMap& team)
{
    // TODO: provide an implementation here...
}

/*!
 * \brief Function outputs information about employees distributed by
 * experience into a given stream.
 *
 * \param ostr is a stream for outputting.
 * \param expList is a collection of employees (by their names) distributed by
 * experience. E.g., such a map can be obtained as a result of
 * groupByExp() function.
 * \param team is a map of employees (e.g. created by loadAllEmployees() function).
 *
 * Cost: »»»0.35«««
 *
 * Function outputs experience and then a set of employees with such
 * a level of experience (alphabetical order). Employees are output 
 * using the following rules:
 *  - the alphabetical order of employee names is used;
 *  - one employee per line preceded by a tab ('\t') character;
 *  - the employee's name is succeded by the employee's position, separated by
 *    a comma with a space; then a semicolon character with a space. Then daily rate, 
 *    salary for a day of work with "$" suffix. For ex.: if salary is 300 (a week)
 *    with 3 days of work, this field should be "100$" followed by a comma and a space. Then
 *    a number of working days.
 *
 * Example:
 *
 * 3 to 5 years
 *    →    Keagan Ahmed, prog; 330, 3
 *    →    Leilani Kouma, fellow; 150, 3
 *    →    Louisa Barton, prog; 300, 3
 *   ...
 * more than 8 years
 *    →    Shanai Bowman, head; 200, 5
 *    →    Wyatt Richards, head; 200, 6
 *
 *
 * Hint: use team to collect all necessary data about an employee.
 */
void printExpEmplMap(std::ostream& ostr, const ExpEmplMap& expList,
                                  const NameEmployeeMap& team)
{
    // TODO: provide an implementation here...
}


//==========[TASK 3 OPTIONAL: up to 20 bonus points to OA grade]==============//

// Warning: this part will be considered only the previous two parts are
// solved completely!

// !! → Both following methods must be provided as a single submission! ←

/// Outputs a given set of strings, one string per line.
/// Cost: »»»4 BP«««
void outputStrSet(std::ostream& ostr, const StrSet& ss)
{
    // TODO: provide an implementation here...
}


/*!
 * \brief For a given Employee, finds all their direct and indirect subordinates.
 *
 * \param boss is an employee for subordinates are found.
 * \param team is a map of employees (e.g. created by loadAllEmployees() function).
 *
 * Cost: »»»16 BP«««
 *
 * It is guaranteed that there is no circular dependencies.
 * If an employee does not have any subordinates, returns empty set.
 *
 * Example:
 *      input: "Harry Acosta"
 *      return: {"Leilani Kouma", "Liyah Rosas", "Manuel Carson"}
 */
StrSet selectSubordinatesByName(const std::string& boss, const NameEmployeeMap& team)
{
    // TODO: provide an implementation here...
}
