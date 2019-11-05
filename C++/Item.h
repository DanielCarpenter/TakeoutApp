#ifndef ITEM_H
#define ITEM_H

#include <cstdlib>
#include <string>
#include <iostream>

namespace food
{
    class Item
    {
        public:
            static const size_type DEFAULT_PRICE[2] = [0, 0];
            static const string DEFAULT_NAME = "default name";
            static const string DEFAULT_DESCRIPTION = "default description";
            typedef std::size_t size_type;
            Item(size_type iPrice[2] = DEFAULT_PRICE, string iName = DEFAULT_NAME, string desc = DEFAULT_DESCRIPTION);
            void print(std::ostream& out);
        private:
            size_type price[2];
            string name, description;

    };
}

#endif