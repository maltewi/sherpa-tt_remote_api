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
      return m_FrontalCameraImage;
    }

    const Image& getGripperCameraImage() const {
      return m_GripperCameraImage;
    }

    const IMU& getIMUData() const {
      return m_IMUData;
    }

    const Joints& getManipulatorJointState() const {
      return m_ManipulatorJointState;
    }

    const Joints& getMobileBaseJointState() const {
      return m_MobileBaseJointState;
    }

    const Pose& getPose() const {
      return m_Pose;
    }

    void sendMotion2D(Motion2D& eIngCommand);

    void sendManipulatorJointCommand(Motion2D& eIngCommand);

  private:
    Pose m_Pose;
    Joints m_ManipulatorJointState;
    Joints m_MobileBaseJointState;
    Image m_FrontalCameraImage;
    Image m_GripperCameraImage;
    IMU m_IMUData;
    DEM m_DEM;
    DGPS m_DGPS;
};

#endif /* SHERPATTTELECLIENT_H_ */
