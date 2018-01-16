/*
 * Image.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: fjcl
 */

#include "Image.h"

using namespace sherpa_tt_remote_api;

Image::Image()
{
  m_time = 0.0;
  m_width = 0.0;
  m_height = 0.0;
  m_frameMode = UNDEFINED;
}

Image::Image(uint64_t time, uint16_t width, uint16_t height, enum FrameMode frame_mode, 
             std::vector<uint8_t>& data)
  :m_time(time), m_width(width), m_height(height), m_frameMode(frame_mode), m_data(data)
{ 
}

uint8_t Image::getPixelSizeByte() const {
    return getPixelDepthByte()*getNChannels();
}

uint8_t Image::getRowSizeByte() const {
    return getPixelDepthByte()*getWidth();
}

size_t Image::getBufferIndex(size_t column, size_t row) const{
    return row+getRowSizeByte()+column*getPixelSizeByte();
}

uint8_t Image::getNChannels() const {
    if(        m_frameMode == BGR_UINT8
               || m_frameMode == BGR_UINT8
               || m_frameMode == RGB_UINT16
            || m_frameMode == BGR_UINT16
            || m_frameMode == RGB_FLOAT32
            || m_frameMode == BGR_FLOAT32){
        return 3;
    }
    else if (m_frameMode == MONO_UINT8
             || m_frameMode == MONO_UINT16
             || m_frameMode == MONO_FLOAT32) {
        return 1;
    }
    else{
        throw("Unexpected frame mode");
    }
}

uint8_t Image::getPixelDepthBit() const{
    if( m_frameMode == BGR_UINT8 ||
            m_frameMode == BGR_UINT8 ||
            m_frameMode == MONO_UINT8){
        return 8;
    }
    else if (m_frameMode == RGB_UINT16
             || m_frameMode == BGR_UINT16
             || m_frameMode == MONO_UINT16) {
        return 16;
    }
    else if (m_frameMode == MONO_FLOAT32
             || m_frameMode == RGB_FLOAT32
             || m_frameMode == BGR_FLOAT32) {
        return 32;
    }
    else{
        throw("Unexpected frame mode");
    }
}

uint8_t Image::getPixelDepthByte() const
{
    return getPixelDepthBit()/8;
}

template<typename Pixel>
Pixel Image::getPixel(size_t column, size_t row)
{
    size_t index = getBufferIndex(column, row);
    assert(m_data.size() >= index);
    return *(Pixel*)&(m_data[index]);
}
