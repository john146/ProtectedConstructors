//
//  ProtectedClass.cpp
//  ProtectedConstructors
//
//  Created by John Ahrens on 5/8/16.
//  Copyright © 2016 John Ahrens. All rights reserved.
//

#include "ProtectedClass.hpp"

#include <iostream>

Protected::Protected(int initialize): initialize_(initialize)
{
    std::cout << "Inside single parameter Protected constructor" << std::endl;
}