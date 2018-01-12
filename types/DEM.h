/*
 * DEM.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef DEM_H_
#define DEM_H_

#include "Image.h"
#include "Pose.h"

namespace sherpa_tt_remote_api{
enum PointOfReference{
    Pixel00,
    Center
};

class DEM {
  public:
    DEM();
    virtual ~DEM();

    float metersPerPixelX() const;
    void setMetersPerPixelX(float metersPerPixelX);

    float metersPerPixelY() const;
    void setMetersPerPixelY(float metersPerPixelY);

    float metersPerIntensity() const;
    void setMetersPerIntensity(float metersPerIntensity);

    Image heightMap() const;
    void setHeightMap(const Image &heightMap);

    Image validityMap() const;
    void setValidityMap(const Image &validityMap);

    std::string referenceFrame() const;
    void setReferenceFrame(const std::string &referenceFrame);

    PointOfReference pointOfReference() const;
    void setPointOfReference(const PointOfReference &pointOfReference);

private:
    float m_metersPerPixelX;
    float m_metersPerPixelY;
    float m_metersPerIntensity;
    //Will be FrameMode::MONO_FLOAT32 or FrameMode::MONO_UINT16
    Image m_heightMap;
    //Will be FrameMode::MONO_UINT8 with zeroes cells with unknown
    //values and ones for cells with valid measurements
    Image m_validityMap;
    std::string m_referenceFrame;
    PointOfReference m_pointOfReference;
};
}

#endif /* DEM_H_ */
