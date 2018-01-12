/*
 * DEM.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "DEM.h"

using namespace sherpa_tt_remote_api;

DEM::DEM()
{
	// TODO Auto-generated constructor stub

}

DEM::~DEM()
{
	// TODO Auto-generated destructor stub
}

float DEM::metersPerPixelX() const
{
    return m_metersPerPixelX;
}

void DEM::setMetersPerPixelX(float metersPerPixelX)
{
    m_metersPerPixelX = metersPerPixelX;
}

float DEM::metersPerPixelY() const
{
    return m_metersPerPixelY;
}

void DEM::setMetersPerPixelY(float metersPerPixelY)
{
    m_metersPerPixelY = metersPerPixelY;
}

float DEM::metersPerIntensity() const
{
    return m_metersPerIntensity;
}

void DEM::setMetersPerIntensity(float metersPerIntensity)
{
    m_metersPerIntensity = metersPerIntensity;
}

Image DEM::heightMap() const
{
    return m_heightMap;
}

void DEM::setHeightMap(const Image &heightMap)
{
    m_heightMap = heightMap;
}

Image DEM::validityMap() const
{
    return m_heightMap;
}

void DEM::setValidityMap(const Image &validityMap)
{
    m_validityMap = validityMap;
}


std::string DEM::referenceFrame() const
{
    return m_referenceFrame;
}

void DEM::setReferenceFrame(const std::string &referenceFrame)
{
    m_referenceFrame = referenceFrame;
}

PointOfReference DEM::pointOfReference() const
{
    return m_pointOfReference;
}

void DEM::setPointOfReference(const PointOfReference &pointOfReference)
{
    m_pointOfReference = pointOfReference;
}

