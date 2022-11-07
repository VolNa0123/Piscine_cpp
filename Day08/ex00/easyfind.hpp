#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
    typename T::iterator index = std::find(haystack.begin(), haystack.end(), needle);
    if (index == haystack.end())
    {
        if (*index != needle)
            throw (std::exception());
    }
    return (index);
}

#endif