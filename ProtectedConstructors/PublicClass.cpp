//
//  PublicClass.cpp
//  ProtectedConstructors
//
//  Created by John Ahrens on 5/8/16.
//  Copyright © 2016 John Ahrens. All rights reserved.
//

#include "PublicClass.hpp"

#include <iostream>

Public::Public(int init): Protected(init)
{
    std::cout << "Inside Public class constructor." << std::endl;
}

void Public::Print() const
{
    std::cout << "Initializer: " << GetInitializer() << std::endl;
}