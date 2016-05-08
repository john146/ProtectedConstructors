//
//  main.cpp
//  ProtectedConstructors
//
//  Created by John Ahrens on 5/8/16.
//  Copyright © 2016 John Ahrens. All rights reserved.
//

#include "PublicClass.hpp"

#include <iostream>

int main(int argc, const char * argv[])
{
    int init(5);
    Public myPublic(init);
    myPublic.Output();
}
