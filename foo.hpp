#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    // Krok 1: Inkrementacja pola age poprzez metodę birthday
    std::for_each(people.begin(), people.end(), [](Human& person) {
    person.birthday();
    });
    // Krok 2: Utworzenie wektora z wynikami isMonster
    std::vector<char> results;
    std::transform(humans.rbegin(), humans.rend(), std::back_inserter(results), [](const Human& human) {
        return human.isMonster() ? 'n' : 'y';
    });
    return retval;
}
