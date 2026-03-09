
#pragma once

#include "ICompCroissance.hpp"

class CroissanceSecheresse : public ICompCroissance
{
public:
	double newTaille(double oldTaille) const override;
};