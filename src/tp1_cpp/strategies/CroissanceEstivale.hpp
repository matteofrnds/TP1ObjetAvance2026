
#pragma once

#include "ICompCroissance.hpp"

class CroissanceEstivale : public ICompCroissance
{
public:
	double newTaille(double oldTaille) const override;
};