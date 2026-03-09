
#pragma once

#include "Terrain.hpp"

class IFabrique
{
    public:
        virtual ~IFabrique() = default;

        virtual class Vegetal* creerVegetal() const = 0;
};