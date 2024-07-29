#include "StreamBuffer.h"



StreamBuffer::StreamBuffer(int streamBufferSize)
    : _buffer(streamBufferSize/4 + 2, 0), _bufSize(0) {

}

StreamBuffer::~StreamBuffer() {

}
