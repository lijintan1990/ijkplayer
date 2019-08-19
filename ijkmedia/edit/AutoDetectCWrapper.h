//
// Created by qiubai on 2019-08-12.
//
/**
 * 给C调用
 */
#ifndef QBPLAYER_AUTODETECTCWRAPER_H
#define QBPLAYER_AUTODETECTCWRAPER_H

#include <cstdint>



typedef struct FrameSticker {
   uint8_t *data;
   int imageWidth;
   int imageHeight;
   int viewWidth;
   int viewHeight;
} FrameSticker;

/**
 * 获取跟踪贴纸数据相关信息
 * @param pts 时间戳
 * @param stickerArray 需要填充的贴纸数据
 * @param stickerArraySize [in, out],传入的是stickerArray的容量，传出的是实际填充的数据容量
 * @return
 */
extern "C" bool getDetectedData(int64_t pts, FrameSticker *stickerArray, int* stickerArraySize);


#endif //QBPLAYER_AUTODETECTCWRAPER_H
