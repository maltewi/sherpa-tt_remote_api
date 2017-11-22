/*
 * Joints.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Joints.h"
#include <algorithm>
#include <stdexcept>
#include "assert.h"

using namespace sherpa_tt_remote_api;

Joints::Joints()
{
    // TODO Auto-generated constructor stub

    m_time = 0;
    m_jointStates = std::vector<JointState>();
}

Joints::Joints(long time, std::vector<JointState>& jointStates)
    : m_time(time), m_jointStates(jointStates)
{
    // TODO
}

Joints::~Joints()
{
    // TODO Auto-generated destructor stub
}

size_t Joints::getJointIndexByName(const std::string &jointName)
{
    assert(m_jointStates.size() == m_jointNames.size());

    std::vector<std::string>::iterator it = std::find(m_jointNames.begin(), m_jointNames.end(), jointName);
    if (it == m_jointNames.end())
    {
        throw(std::runtime_error(std::string()+"Joint with name "+jointName+" could not be found"));
    } else
    {
        size_t index = std::distance(m_jointNames.begin(), it);
        return index;
    }
}

JointState Joints::getJointStateByName(const std::string& jointName)
{
    size_t index = getJointIndexByName(jointName);
    return m_jointStates.at(index);
}

void Joints::setJointStateByName(const std::string &jointName, const JointState &jointState)
{
    size_t index = getJointIndexByName(jointName);
    m_jointStates[index] = jointState;
}
