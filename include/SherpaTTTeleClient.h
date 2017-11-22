/*
 * SherpaTTTeleClient.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef SHERPATTTELECLIENT_H_
#define SHERPATTTELECLIENT_H_

#include "Pose.h"
#include "Joints.h"
#include "Image.h"
#include "IMU.h"
#include "DEM.h"
#include "DGPS.h"
#include "Motion2D.h"

class SherpaTTTeleClient {
  public:
    SherpaTTTeleClient();
    virtual ~SherpaTTTeleClient();

    const DEM& getDEM() const {
      return m_DEM;
    }

    const DGPS& getDGPS() const {
      return m_DGPS;
    }

    const Image& getFrontalCameraImage() const {
      return m_FrontalCamImage;
    }

    const Image& getGripperCamerImage() const {
      return m_GripperCamImage;
    }

    const IMU& getIMUData() const {
      return m_IMU;
    }

    const Joints& getManipulatorJointState() const {
      return m_ManipulatorJoints;
    }

    const Joints& getMobileBaseJointState() const {
      return m_MobileBaseJoints;
    }

    const Pose& getPose() const {
      return m_Pose;
    }

    void sendMotion2D(Motion2D& eIngCommand);

    void sendManipulatorJointCommand(Motion2D& eIngCommand);

  private:
    Pose m_Pose;
    Joints m_ManipulatorJoints;
    Joints m_MobileBaseJoints;
    Image m_FrontalCamImage;
    Image m_GripperCamImage;
    IMU m_IMU;
    DEM m_DEM;
    DGPS m_DGPS;
};

#endif /* SHERPATTTELECLIENT_H_ */
