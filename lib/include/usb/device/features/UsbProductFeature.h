/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once


namespace stm32plus {


  /**
   * Provide a product string. This is optional
   */

  template<class TUsbDevice>
  class UsbProductFeature : public UsbStringFeatureBase<TUsbDevice> {

    public:
      struct Parameters {
        const char *device_product;
      };

    public:
      UsbProductFeature(TUsbDevice& device,const Parameters& params);
  };


  /**
   * Constructor
   * @param device A reference to the USB device
   * @param str The product string
   */

  template<class TUsbDevice>
  inline UsbProductFeature<TUsbDevice>::UsbProductFeature(TUsbDevice& device,const Parameters& params)
    : UsbStringFeatureBase<TUsbDevice>(device,params.device_product,USBD_IDX_PRODUCT_STR) {
  }
}