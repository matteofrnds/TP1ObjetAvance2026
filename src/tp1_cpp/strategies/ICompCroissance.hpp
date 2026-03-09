
#pragma once

class ICompCroissance 
{
public:
    virtual ~ICompCroissance() = default;
    virtual double newTaille(double oldTaille) const = 0;
};