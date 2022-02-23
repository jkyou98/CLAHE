#ifndef PARAM_H_
#define PARAM_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>
  /**
   * A structure to represent image basic info.
   */
  typedef struct ImageInfo_t
  {
    /**
     * @name Buffer
     */
    /*@{*/
    void *image;        /**< pointer which point to image buffer */
    void *output_image; /**< pointer which point to output buffer */
    /*@}*/
    /**
     * @name Info
     */
    /*@{*/
    uint16_t width;        /**<  image width */
    uint16_t height;       /**< image height*/
    uint8_t bit;           /**< image bit*/
    uint8_t update_status; /**< 0:original,
                            *1:*image updated,
                            *2:save to *output_image */
    /*@}*/
  } ImageInfo;
  /**
   * A structure to represent CLAHE parameter info.
   */
  typedef struct CLAHE_param_t
  {
    /**
     * @name Buffer
     */
    /*@{*/
    void *image_padding; /**< pointer which point to image padding buffer */
    void *CDF_map;       /**< pointer which point to CDF map buffer */
    /*@}*/
    /**
     * @name Parameters
     */
    /*@{*/
    uint16_t b_width;         /**< block width*/
    uint16_t b_height;        /**<block height*/
    uint8_t grid_x;           /**<grid size on x axis*/
    uint8_t grid_y;           /**<grid size on y axis*/
    uint16_t image_padding_w; /**<image padding width*/
    uint16_t image_padding_h; /**<image padding height*/
    uint16_t padding_w;       /**<padding width*/
    uint16_t padding_h;       /**<padding height*/
    float S_limit;            /**<CDF slope limit*/
    /*@}*/
  } CLAHE_param;

#ifdef __cplusplus
}
#endif
#endif