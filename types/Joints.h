/*
 * Joints.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef JOINTS_H_
#define JOINTS_H_

#include "JointState.h"

class Joints {
  public:
    Joints();
    Joints(long time, JointState& jointStates);
    virtual ~Joints();

    const JointState& getJointStates() const {
      return m_jointStates;
    }

    void setJointStates(const JointState& jointStates) {
      m_jointStates = jointStates;
    }

    long getTime() const {
      return m_time;
    }

    void setTime(long time) {
      m_time = time;
    }

  private:
    long m_time;
    JointState m_jointStates;
};

#endif /* JOINTS_H_ */
