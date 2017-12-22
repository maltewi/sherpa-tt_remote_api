/*
 * Pose.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Pose.h"

namespace sherpa_tt_remote_api{
    
Pose::Pose()
{
  m_position = Vector3();
  m_orientation = Quaternion();
  m_referenceFrame = "";
  m_frameName = "";
}

Pose::Pose(Vector3& position, Quaternion& orientation, std::string referenceFrame, std::string frameName)
  :m_position(position), m_orientation(orientation),
   m_referenceFrame(referenceFrame), m_frameName(frameName)
{
  // TODO Auto-generated constructor stub

}

} // end namespace sherpa_tt_remote_api


