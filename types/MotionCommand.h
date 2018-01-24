/*
 * Motion2D.h
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#ifndef MOTION2D_H_
#define MOTION2D_H_

namespace sherpa_tt_remote_api{
class MotionCommand {
  public:
    MotionCommand();
    MotionCommand(int manoeuvreType, double curvature_radm, double speed_ms, double turnRate_rads);
    ~MotionCommand();
    /*!
     * @name    manoeuvreType
     * @details Manoeuver type: ackermann, point turn, stop.
     *          This can take values defined in RoverGuidance_Constants.h of the
     *          form ROVER_GUIDANCE_LOCOMAN_CMD_XXXX
     */
    int m_manoeuvreType;

    /*!
     * @name     curvature_radm, speed_ms
     * @details  For Ackermann manoeuvres
     *           These are valid only if manoeuvreType is "Ackermann"
     */
    double m_curvature_radm; //in radians/meter
    double m_speed_ms;  //in meters/seconds

    /*!
     * @name     turnRate_rads
     * @details  For Point Turn manoeuvres
     *           These are valid only if manoeuvreType is "Point Turn"
     */
    double m_turnRate_rads; //in radians/seconds

};
}

#endif /* MOTION2D_H_ */
