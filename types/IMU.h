/*
 * IMU.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef IMU_H_
#define IMU_H_

#include "Vector3.h"

class IMU {
  public:
    IMU();
    IMU(long time, Vector3& acc, Vector3& gyro, Vector3& mag);
    virtual ~IMU();

    const Vector3& getAcc() const {
      return m_acc;
    }

    void setAcc(const Vector3& acc) {
      m_acc = acc;
    }

    const Vector3& getGyro() const {
      return m_gyro;
    }

    void setGyro(const Vector3& gyro) {
      m_gyro = gyro;
    }

    const Vector3& getMag() const {
      return m_mag;
    }

    void setMag(const Vector3& mag) {
      m_mag = mag;
    }

    long getTime() const {
      return m_time;
    }

    void setTime(long time) {
      m_time = time;
    }

  private:
    long m_time;
    Vector3 m_acc;
    Vector3 m_gyro;
    Vector3 m_mag;
};

#endif /* IMU_H_ */
