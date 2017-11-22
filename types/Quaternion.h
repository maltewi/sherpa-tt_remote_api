/*
 * Quaternion.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef QUATERNION_H_
#define QUATERNION_H_

namespace sherpa_tt_remote_api{
class Quaternion {
  public:
    Quaternion();
    Quaternion(double x, double y, double z, double w);
    virtual ~Quaternion();

    double getW() const {
      return m_w;
    }

    void setW(double w) {
      m_w = w;
    }

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

  private:
    double m_x;
    double m_y;
    double m_z;
    double m_w;
};
}

#endif /* QUATERNION_H_ */
