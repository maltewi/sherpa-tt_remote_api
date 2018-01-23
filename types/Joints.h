/*
 * Joints.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef JOINTS_H_
#define JOINTS_H_

#include "JointState.h"
#include <vector>
#include <string>
#include <exception>

namespace sherpa_tt_remote_api{
class Joints {
  public:
    uint64_t m_time;
    std::vector<JointState> m_jointStates;
    std::vector<std::string> m_jointNames;  
      
    Joints();
    Joints(uint64_t time, std::vector<JointState>& jointStates);

    const std::vector<JointState>& getJointStates() const {
      return m_jointStates;
    }

    void setJointStates(const std::vector<JointState>& jointStates) {
      m_jointStates = jointStates;
    }

    void setJointNames(const std::vector<std::string>& jointNames) {
      m_jointNames = jointNames;
    }

    size_t getJointIndexByName(const std::string& jointName);

    JointState getJointStateByName(const std::string& jointName);
    void setJointStateByName(const std::string& jointName, const JointState& jointState);

    uint64_t getTime() const {
      return m_time;
    }

    void setTime(uint64_t time) {
      m_time = time;
    }
};
}

#endif /* JOINTS_H_ */
