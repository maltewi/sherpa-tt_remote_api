/*
 * Pose.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef POSE_H_
#define POSE_H_

#include "Vector3.h"
#include "Quaternion.h"

#include <string>

namespace sherpa_tt_remote_api{
class Pose {
  public:
    Pose();
    Pose(Vector3& position, Quaternion& orientation, std::string referenceFrame,
        std::string frameName);
    virtual ~Pose();

    std::string getFrameName() const {
      return m_frameName;
    }

    void setFrameName(std::string frameName) {
      m_frameName = frameName;
    }

    const Quaternion& getOrientation() const {
      return m_orientation;
    }

    void setOrientation(const Quaternion& orientation) {
      m_orientation = orientation;
    }

    const Vector3& getPosition() const {
      return m_position;
    }

    void setPosition(const Vector3& position) {
      m_position = position;
    }

    std::string getReferenceFrame() const {
      return m_referenceFrame;
    }

    void setReferenceFrame(std::string referenceFrame) {
      m_referenceFrame = referenceFrame;
    }

  private:
    Vector3 m_position;
    Quaternion m_orientation;
    std::string m_referenceFrame;
    std::string m_frameName;
};
}

#endif /* POSE_H_ */
