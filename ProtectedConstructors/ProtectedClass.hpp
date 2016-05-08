//
//  ProtectedClass.hpp
//  ProtectedConstructors
//
//  Created by John Ahrens on 5/8/16.
//  Copyright © 2016 John Ahrens. All rights reserved.
//

#ifndef ProtectedClass_hpp
#define ProtectedClass_hpp

#include <stdio.h>

class Protected
{
protected:
    Protected();
    explicit Protected(int initialize);
    
    virtual void Print() const = 0;
    int GetInitializer() const {return initialize_;}
    
private:
    int initialize_;
    
    Protected(const Protected&);
    Protected& operator=(const Protected&);
};

#endif /* ProtectedClass_hpp */
