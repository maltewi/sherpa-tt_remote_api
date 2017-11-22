/*
 * JoinState.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef JOINSTATE_H_
#define JOINSTATE_H_

class JointState {
  public:
    JointState();
    JointState(long m_position, double m_speed, double m_acceleration, double m_effort);
    virtual ~JointState();

    double getAcceleration() const {
      return m_acceleration;
    }

    void setAcceleration(double acceleration) {
      m_acceleration = acceleration;
    }

    double getEffort() const {
      return m_effort;
    }

    void setEffort(double effort) {
      m_effort = effort;
    }

    long getPosition() const {
      return m_position;
    }

    void setPosition(long position) {
      m_position = position;
    }

    double getSpeed() const {
      return m_speed;
    }

    void setSpeed(double speed) {
      m_speed = speed;
    }

  private:
    long m_position;
    double m_speed;
    double m_acceleration;
    double m_effort;
};

#endif /* JOINSTATE_H_ */
