//
//  PublicClass.hpp
//  ProtectedConstructors
//
//  Created by John Ahrens on 5/8/16.
//  Copyright © 2016 John Ahrens. All rights reserved.
//

#ifndef PublicClass_hpp
#define PublicClass_hpp

#include "ProtectedClass.hpp"

#include <stdio.h>

class Public: protected Protected
{
public:
    explicit Public(int begin);
    void Output() const {this->Print();}
    
protected:
    virtual void Print() const;
    
};

#endif /* PublicClass_hpp */
