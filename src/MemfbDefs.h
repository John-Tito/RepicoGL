//
// Created by kaaass on 2020/3/16.
//

#ifndef PICOGL_TEST_MEMFBDEFS_H
#define PICOGL_TEST_MEMFBDEFS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdlib.h>
    void *getFrameBuffer(void);
    size_t sizeOfFrameBuffer();
#ifdef __cplusplus
}
#endif

#endif //PICOGL_TEST_MEMFBDEFS_H
