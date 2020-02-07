/*! \file       main.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       20.12.2019
 *
 *  Exam. Main module
 *
 */

#include "solut.h"

#include <iostream>
#include <fstream>


void test1()
{
    std::ifstream inpFile("input.txt");
    NameEmployeeMap team = loadAllEmployees(inpFile);
    for (const std::pair<std::string, Employee>& empl : team)
    {
        std::cout << empl.second.name << " " << empl.second.position << " "
                  << empl.second.boss << " " << empl.second.salary << " "
                  << empl.second.experience << " " << empl.second.workdays.size () << "\n";

    }
}


void test2()
{
    std::ifstream inpFile("input.txt");
    NameEmployeeMap team = loadAllEmployees(inpFile);

    ExpEmplMap expList = groupByExp(team);
    printExpEmplMap(std::cout, expList, team);
}


void test3()
{
    std::ifstream inpFile("input-task3.txt");   // !!! note, the example file
                                                // is input-task3.txt !!!
    std::string boss;
    std::getline(inpFile, boss);
    NameEmployeeMap team = loadAllEmployees(inpFile);

    StrSet subs1 = selectSubordinates(boss, team);
    outputStrSet(std::cout, subs1);
}

int main()
{
    test1();
    test2();
    test3();

    return 0;
}
