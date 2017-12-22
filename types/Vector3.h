/*
 * Vector3.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef VECTOR3_H_
#define VECTOR3_H_

namespace sherpa_tt_remote_api{
class Vector3 {
  public:
    double m_x;
    double m_y;
    double m_z;
      
    Vector3();
    Vector3(double x, double y, double z);

    double getX() const {
      return m_x;
    }

    void setX(double x) {
      m_x = x;
    }

    double getY() const {
      return m_y;
    }

    void setY(double y) {
      m_y = y;
    }

    double getZ() const {
      return m_z;
    }

    void setZ(double z) {
      m_z = z;
    }
};
}

#endif /* VECTOR3_H_ */
